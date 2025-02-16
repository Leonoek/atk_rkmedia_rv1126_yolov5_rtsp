# @author        Li Yuanming
# @email         3292976270@qq.com
# http://www.openedv.com/forum.php

cmake_minimum_required(VERSION 3.8)
message(STATUS "cmake version ${CMAKE_VERSION}")

set(TOOLCHAIN_DIR /opt/atk-dlrv1126-toolchain)
set(CMAKE_CXX_COMPILER ${TOOLCHAIN_DIR}/usr/bin/arm-linux-gnueabihf-g++)
set(CMAKE_C_COMPILER ${TOOLCHAIN_DIR}/usr/bin/arm-linux-gnueabihf-gcc)
set(SYSROOT ${TOOLCHAIN_DIR}/arm-buildroot-linux-gnueabihf/sysroot/usr/include)
set(CMAKE_SYSROOT ${TOOLCHAIN_DIR}/arm-buildroot-linux-gnueabihf/sysroot)

set(CMAKE_CXX_STANDARD 11)
add_definitions(-g -O0 -ggdb -gdwarf -funwind-tables -rdynamic)
add_definitions(-Wno-write-strings -Wno-return-type)

set(OPENCV_LIBS opencv_core opencv_imgcodecs opencv_imgproc opencv_features2d opencv_flann opencv_highgui opencv_freetype)
set(RKMEDIA_LIBS easymedia rga rkaiq sample_common_isp rknn_api)
link_directories(include ./librtsp lib)

include_directories(${SYSROOT}
                    ${SYSROOT}/rga
                    ${SYSROOT}/easymedia
                    ${SYSROOT}/rkaiq/uAPI
                    ${SYSROOT}/rkaiq/xcore
                    ${SYSROOT}/rkaiq/algos
                    ${SYSROOT}/rkaiq/common
                    ${SYSROOT}/rkaiq/iq_parser
                    ${SYSROOT}/rknn
                    .
                    ./librtsp
                    ./include
                    ./include/3rdparty
                    ./include/3rdparty/rga/include)

add_definitions(-DRKAIQ)

project(yolov5_rtsp_demo)
add_executable(yolov5_rtsp
            yolov5_rtsp.cpp 
            atk_yolov5_object_recognize.cpp 
            include/postprocess.cc
            include/rga_func.c)

target_link_libraries(yolov5_rtsp 
                    ${OPENCV_LIBS} 
                    ${RKMEDIA_LIBS} 
                    pthread 
                    dl 
                    librtsp.a)