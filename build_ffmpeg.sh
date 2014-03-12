#!/bin/sh

#Set android NDK Path
NDK_SRC_DIR="/project/ndk/android-ndk-r9c"
NDK_PROJECT_PATH=./ffmpeg
export PATH=$PATH:${NDK_SRC_DIR}
export NDK_PROJECT_PATH
echo "clean old obj"
#ndk-build APP_BUILD_SCRIPT=./Android.mk  clean
echo "build app"
ndk-build APP_BUILD_SCRIPT=./Android.mk 


