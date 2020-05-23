# FFmpeg Development Kit
Main purpose of this repository is to help people in building FFmpeg, mainly on mobile platforms
(I tested this on Android, but armv7 shared libraries should be ok for iOS too).

## Prerequisites
This kit is suposed to work with Android NDK version **r17b for OSX**. Version of FFmpeg is **4.0.2**. Please, note that
versions are quite important here, since it's not guaranteed that with other version of FFmpeg and/or NDK shared libs 
would even compile. If you want to change version of FFmpeg and/or NDK you're completely free to do this, although I should aware you
that this might not be a good idea.

## Setup
Quite small amount of setup is needed. Follow steps below:
1. Download and unpack standalone NDK, *in the same directory your project is located* (r17b recommended).
2. Download FFmpeg (4.0.2 recommended).
3. Unpack FFmpeg to {NDK_directory}/sources.
4. Copy files from `ffmpeg` folder to the FFmpeg directory.
5. Copy files from `JNI` folder to folder containing your native sources.
6. Copy following files from FFmpeg directory to to folder containing your native sources: `ffmpeg.c ffmpeg_filter.c ffmpeg_opt.c cmdutils.c ffmpeg_cuvid.c ffmpeg_hw.c logjam.c`.

It's pretty much all. FFmpeg directory now should contain bash-script called build.sh **(will require yasm from you on linux)**.
**If you want to build only for some specific architectures - just comment out appropriate arch in build.sh
(by default it will build everything)**.

After this you should be able to just run ./build.sh if FFMpeg directory. Please, note, building normally is taking quite a 
bit of time, so be ready to wait from 15m up to 1h for everything to be builded. After this, inside FFmpeg directory you will have
"android" folder which will contain .so files for every architecture and inside JNI/app you should have folder called "out" 
which should contain libvideokit.so (unless you have changed the name of library) and all related .so files for every platform.

**Important note: if you will use this development 
kit in order to build FFmpeg with any of GPL libraries (as libx264 for example) end product will be licensed under GPL. 
If none of GPL libraries were used: product is licensed under LGPL too. Read FFmpeg license to find out more: 
[Legal](https://ffmpeg.org/legal.html)**
