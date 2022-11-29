// rustc load.rs -o load_rs
use std::fs::File;
use std::io::prelude::*;
use std::io::SeekFrom;
use std::thread::spawn;
use std::thread;

//fn write_parallel(ptr: Arc<String>, mut output: File, offset: u64){
fn write_parallel(id: u64){
    let img_name  = std::env::args().skip(1).next().expect("no img is given");
    const BUILD_DIR: &str = "/home/s081/Downloads/ysyx-workbench/npc/src/main/scala/verilator/tests/build/";
    let input_img = format!("{}{}", &BUILD_DIR, &img_name);

    const IMG_DIR: &str  = "/home/s081/Downloads/ysyx-workbench/npc/src/main/scala/";
    let mut output = File::create(format!("{}img_file{}",&IMG_DIR, id)).expect("can't create output img");
    let mut input  = File::open(input_img).expect("can't open file");
    let offset = id * 4;
    input.seek(SeekFrom::Start(offset)).unwrap();

    loop {
        let mut buf:Vec<u8> = vec![0;4];
        let n = input.read(&mut buf).expect("read failed");
        if n <= 0 {
            break;
        }
        // 4B per inst. Step over 3 * 4 = 12B
        input.seek(SeekFrom::Current(12)).unwrap();
        let s = format!("{:02x}{:02x}{:02x}{:02x}\n", buf[3], buf[2], buf[1], buf[0]);
        output.write(&s.as_bytes()).expect("write failed");
    }
    println!("thread {:?} exited", thread::current().id());
}
fn main() {
    let mut thread_handles = Vec::new();
    for i in 0..4 {
        thread_handles.push(spawn(
                move || write_parallel(i)
        ));
    }

    for handle in thread_handles{
        handle.join().expect("some error");
    }
    println!("thread {:?} exited", thread::current().id());

}
