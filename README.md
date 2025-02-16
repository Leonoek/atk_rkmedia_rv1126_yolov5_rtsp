# rockchip_rv1126_rv1106_yolov5_rtsp
rockchip_rv1126_rv1106_yolov5_rtsp

# Start up
## 1.Take care of CMakeLists.txt<br>
Make sure you have rv1126/rv1109 toolchain,i using /opt/atk-dlrv1126-toolchain,it use well for alientek made rv1126 machine.
Also you can using toolchain in sdk,for example:("XXX" means the sdk address)<br>
```
GCC_COMPILER_PATH=/XXX/prebuilts/gcc/linux
x86/arm/gcc-arm-8.3-2019.03-x86_64-arm-linux-gnueabihf/bin/arm-linux
gnueabihf
```

## 2.Let PC linking rv1126 machine
I have USB-A to Type-C linking PC and rv1126 machine for adb protocol,it's easy to use.<br>

## 3.Set up environment
Move env to /demo/bin in rv1126 machine<br>
```
cd env
adb push coco_80_labels_list.txt yolov5s_relu_rv1109_rv1126_out_opt.rknn /demo/bin
```

# Useage
## Compiled source code
```
cd build
cmake ..
make
```

## Send compiled programe to your rv1126/rv1109 machine
```
adb push yolov5_rtsp /demo/bin
```

## In your rv1126/rv1109 machine,start programe
```
cd /demo/bin
./yolov5_rtsp
```

## PC watching RTSP demo
warning:do not use VLC media player,because it can't open!<br>
I recommand you:EasyPlayer.Input the rtsp address:<br>
tips:"192.168.XXX.XXX" means rv1126/rv1109 machine address.<br>
```
rtsp://192.168.XXX.XXX/live/main_stream
```
