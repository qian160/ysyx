.section .data
.global ramdisk_start, ramdisk_end
ramdisk_start:
.incbin "build/ramdisk.img"
ramdisk_end:

.section .rodata
.globl logo
logo:
.string "emsjoisjgsughkjvnm,xnirsjxfm,nxlkgn%#$^&%(&(#%#%#$m\nemsjoisjgsughkjvnm,xnirsjxfm,nxlkgn%#$^&%(&(#%#%#$m\nemsjoisjgsughkjvnm,xnirsjxfm,nxlkgn%#$^&%(&(#%#%#$m\nemsjoisjgsughkjvnm,xnirsjxfm,nxlkgn%#$^&%(&(#%#%#$m\nemsjoisjgsughkjvnm,xnirsjxfm,nxlkgn%#$^&%(&(#%#%#$m\nemsjoisjgsughkjvnm,xnirsjxfm,nxlkgn%#$^&%(&(#%#%#$m\nemsjoisjgsughkjvnm,xnirsjxfm,nxlkgn%#$^&%(&(#%#%#$m\nemsjoisjgsughkjvnm,xnirsjxfm,nxlkgn%#$^&%(&(#%#%#$m\nemsjoisjgsughkjvnm,xnirsjxfm,nxlkgn%#$^&%(&(#%#%#$m\nemsjoisjgsughkjvnm,xnirsjxfm,nxlkgn%#$^&%(&(#%#%#$m\nemsjoisjgsughkjvnm,xnirsjxfm,nxlkgn%#$^&%(&(#%#%#$m\nemsjoisjgsughkjvnm,xnirsjxfm,nxlkgn%#$^&%(&(#%#%#$m\nemsjoisjgsughkjvnm,xnirsjxfm,nxlkgn%#$^&%(&(#%#%#$m\nemsjoisjgsughkjvnm,xnirsjxfm,nxlkgn%#$^&%(&(#%#%#$m\nemsjoisjgsughkjvnm,xnirsjxfm,nxlkgn%#$^&%(&(#%#%#$m\nemsjoisjgsughkjvnm,xnirsjxfm,nxlkgn%#$^&%(&(#%#%#$m\nemsjoisjgsughkjvnm,xnirsjxfm,nxlkgn%#$^&%(&(#%#%#$m\nemsjoisjgsughkjvnm,xnirsjxfm,nxlkgn%#$^&%(&(#%#%#$m\nemsjoisjgsughkjvnm,xnirsjxfm,nxlkgn%#$^&%(&(#%#%#$m\nemsjoisjgsughkjvnm,xnirsjxfm,nxlkgn%#$^&%(&(#%#%#$m\nemsjoisjgsughkjvnm,xnirsjxfm,nxlkgn%#$^&%(&(#%#%#$m\nemsjoisjgsughkjvnm,xnirsjxfm,nxlkgn%#$^&%(&(#%#%#$m\nemsjoisjgsughkjvnm,xnirsjxfm,nxlkgn%#$^&%(&(#%#%#$m\nemsjoisjgsughkjvnm,xnirsjxfm,nxlkgn%#$^&%(&(#%#%#$m\nemsjoisjgsughkjvnm,xnirsjxfm,nxlkgn%#$^&%(&(#%#%#$m\nemsjoisjgsughkjvnm,xnirsjxfm,nxlkgn%#$^&%(&(#%#%#$m\nemsjoisjgsughkjvnm,xnirsjxfm,nxlkgn%#$^&%(&(#%#%#$m\nemsjoisjgsughkjvnm,xnirsjxfm,nxlkgn%#$^&%(&(#%#%#$m\nemsjoisjgsughkjvnm,xnirsjxfm,nxlkgn%#$^&%(&(#%#%#$m\nemsjoisjgsughkjvnm,xnirsjxfm,nxlkgn%#$^&%(&(#%#%#$m\nemsjoisjgsughkjvnm,xnirsjxfm,nxlkgn%#$^&%(&(#%#%#$m\n
emsjoisjgsughkjvnm,xnirsjxfm,nxlkgn%#$^&%(&(#%#%#$m\nemsjoisjgsughkjvnm,xnirsjxfm,nxlkgn%#$^&%(&(#%#%#$m\n
emsjoisjgsughkjvnm,xnirsjxfm,nxlkgn%#$^&%(&(#%#%#$m\nemsjoisjgsughkjvnm,xnirsjxfm,nxlkgn%#$^&%(&(#%#%#$m\n"
.incbin "resources/logo.txt"    #this will cause some bugs...
.byte 0
