use std::fs::File;
use std::io::prelude::*;
fn main() {
    let img_name = std::env::args().skip(1).next().expect("no img is given");
    let build_dir = "/home/s081/Downloads/ysyx-workbench/npc/src/main/scala/verilator/tests/build/";
    let img = format!("{}{}", &build_dir, &img_name);

    let mut input = File::open(&img).expect("can't open file");
    let mut img:Vec<File>  = Vec::new();
    img.push(File::create("../img_file1").expect("can't create img1"));
    img.push(File::create("../img_file2").expect("can't create img2"));
    img.push(File::create("../img_file3").expect("can't create img3"));
    img.push(File::create("../img_file4").expect("can't create img4"));
    assert_eq!(img.len(), 4);

    let mut cnt:usize = 0;
    loop {
        let mut buf:Vec<u8> = vec![0;4];
        let n = input.read(&mut buf).expect("read failed");
        if n <= 0 {
            break;
        }
        let s = format!("{:02x}{:02x}{:02x}{:02x}\n", buf[3], buf[2], buf[1], buf[0]);
        img[cnt].write(&s.as_bytes()).expect("write failed");
        cnt = match cnt{
            3   =>  0,
            _   =>  cnt + 1,
        }
    }
}
