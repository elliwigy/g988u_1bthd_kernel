#!/bin/bash
#
# G988U Build Kernel Script
#
echo "This script will build kernel for G988U 1BTHD"
#
echo "..."
#
echo "First we make the out directory via mkdir out"
#
mkdir out
#
echo "..."
#
echo "Now we will setup ccache to using export and ccache -M 50G"
export USE_CCACHE=1
export CCACHE_DIR=~/.ccache
export CCACHE_EXEC=/usr/bin/ccache
ccache -M 50G
echo "ccache -s"
#
echo "..."
#
echo "Now we are setting some variables for the build process such as gcc/clang"
#
BUILD_CROSS_COMPILE=$(pwd)/toolchain/gcc/linux-x86/aarch64/aarch64-linux-android-4.9/bin/aarch64-linux-android-
KERNEL_LLVM_BIN=$(pwd)/toolchain/llvm-arm-toolchain-ship/8.0/bin/clang
CLANG_TRIPLE=aarch64-linux-gnu-
KERNEL_MAKE_ENV="DTC_EXT=$(pwd)/tools/dtc CONFIG_BUILD_ARM64_DT_OVERLAY=y"
export PLATFORM_VERSION=10.0
# export KCONFIG_VARIANT=$(pwd)/kunitconfigs/kunitconfig
# export KCONFIG_DEBUG=$(pwd)/kunitconfigs/kunitconfig.gov
#
echo "..."
#
echo "Now we will actually run the make commands first to set the config file and secondly to start the build process..."
#
make -j8 -C $(pwd) O=$(pwd)/out $KERNEL_MAKE_ENV ARCH=arm64 CROSS_COMPILE=$BUILD_CROSS_COMPILE REAL_CC=$KERNEL_LLVM_BIN CLANG_TRIPLE=$CLANG_TRIPLE vendor/y2q_usa_singlew_defconfig
make -j8 -C $(pwd) O=$(pwd)/out $KERNEL_MAKE_ENV ARCH=arm64 CROSS_COMPILE=$BUILD_CROSS_COMPILE REAL_CC=$KERNEL_LLVM_BIN CLANG_TRIPLE=$CLANG_TRIPLE
 #
 echo "..."
 #
 echo "If we are successful up to this point then we will copy the kernel Image to arch/arm64/boot/Image from the out directory..."
 #
cp out/arch/arm64/boot/Image $(pwd)/arch/arm64/boot/Image
#
echo "..."
#
echo "Hopefully it has built successfully, if not fix any errors and try again!"
#
echo "..."
#
echo "The End"
