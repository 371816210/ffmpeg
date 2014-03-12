#! /bin/bash
PREBUILT=/project/ndk/android-ndk-r9c/toolchains/arm-linux-androideabi-4.6/prebuilt/linux-x86_64
PLATFORM=/project/ndk/android-ndk-r9c/platforms/android-19/arch-arm

./configure --target-os=linux \
	--arch=arm \
	--enable-version3 \
	--enable-gpl \
	--enable-nonfree \
	--disable-stripping \
	--disable-ffmpeg \
	--disable-ffplay \
	--disable-ffserver \
	--disable-ffprobe \
	--disable-encoders \
	--disable-muxers \
	--disable-devices \
	--disable-protocols \
	--enable-protocol=file \
	--enable-avfilter \
	--disable-network \
	--disable-avdevice \
	--enable-cross-compile \
	--cc=$PREBUILT/bin/arm-linux-androideabi-gcc \
	--cross-prefix=$PREBUILT/bin/arm-linux-androideabi- \
	--nm=$PREBUILT/bin/arm-linux-androideabi-nm \
	--extra-cflags="-I${PLATFORM}/usr/include -fPIC -DANDROID -std=c99" \
	--disable-asm \
	--enable-neon \
	--enable-armv5te \
	--extra-ldflags="-Wl,-T,$PREBUILT/arm-eabi/lib/ldscripts/armelf.x -Wl,-rpath-link=$PLATFORM/usr/lib -L$PLATFORM/usr/lib -nostdlib $PREBUILT/lib/gcc/arm-linux-androideabi/4.6/crtbegin.o $PREBUILT/lib/gcc/arm-linux-androideabi/4.6/crtend.o "  \