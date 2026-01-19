Order of achievement:

01 mypack_hello			1st recipe with local sources in a new layer
02 opkg				OPKG (IPK) repository
03 mypack_gen_auto_cmake	Generic recipe (Makefile) + Autotools + CMake
04 bbexample_lib		Shared library (Autotools)
05 mypack_auto_lib		Dependencies

06 mypack_hello_priority	Layer priority
07 mypack_msg			Example with local "message.h"
08 mypack_msg_bbappend		Updating "message.h" by .bbappend -> meta-training2
09 mypack_auto_patch		Patching code with .bbappend

10 busybox_fragment		Update BusyBox config with a "fragment"
   
11 dt_overlay			Device Tree overlay
12 hello_mod			'Hello World' kernel module

13 images			Custom image creation (including some training recipes)
14 images_packagegroup		Same with "package group"

15 new_distro			Creating a new "distro"
16 update_logo			Updating logo for splash screen (psplash)

17 systemd			Adding a systemd service

18 devtool			Using 'devtool'

19 ptest			Using ptest (unit test)
20 testimage			Using testimage (image test)

21 remote_gdb			Remotely debugging an application (GDB/GDBSERVER)

22 iot_device			Yocto "IoT" device
