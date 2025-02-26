# ReadMe
Abstract:Using atk RV1126 PCB Board and Demo,i made a yolov5 detect target with rtsp on my PC.

# Start up
## 1.Development board information<br>
Product model:ATK-DLRV1126<br>
SOC: RockChip RV1126<br>
Storage: 2GB DDR4L, 8GB EMMC<br><br>
Camera: ATK-MCIMX335<br>
Master control:Sony IMX335<br>
Pixel:504W<br>


## 2.Take care of CMakeLists.txt<br>
Make sure you have rv1126/rv1109 toolchain,i using /opt/atk-dlrv1126-toolchain,it is good use for alientek made rv1126 machine.
Also you can using toolchain in sdk,but some function library(rkmedia,RGA,rockx,etc) should be modified.<br>
For example:("XXX" means the sdk address)<br>
```
GCC_COMPILER_PATH=/XXX/prebuilts/gcc/linux
x86/arm/gcc-arm-8.3-2019.03-x86_64-arm-linux-gnueabihf/bin/arm-linux
gnueabihf

include_directories(${lib_name}
                    ${lib_location}/rga)
```

## 3.Let PC linking rv1126 machine
I have USB-A to Type-C linking PC and rv1126 machine for adb protocol,it's easy to use.<br>

## 4.Set up environment
Move files of env package to /demo/bin in rv1126 machine<br>
```
cd env
adb push coco_80_labels_list.txt yolov5s_relu_rv1109_rv1126_out_opt.rknn /demo/bin
adb push imx415_YT10092_IR0147-60IRC-8M-F20-hdr3.xml imx335_MTV4-IR-E-P_40IRC-4MP-F16.xml /etc/iqfiles
```
tip:you can also use ispserver avoid config iqfiles.<br>
```
ispserver &
```

# Useage
## 1.Compiled source code
```
cd build
cmake ..
make
```

## 2.Send compiled programe to your rv1126/rv1109 machine
```
adb push yolov5_rtsp /demo/bin
```

## 3.In your rv1126/rv1109 machine,start programe
```
cd /demo/bin
./yolov5_rtsp
```

# PC watching RTSP demo
warning:do not use VLC media player,because it can't open!<br>
I recommand you:EasyPlayer.Input the rtsp address:<br>
tips:"192.168.XXX.XXX" means rv1126/rv1109 machine's ip address.<br>
```
rtsp://192.168.XXX.XXX/live/main_stream
```
