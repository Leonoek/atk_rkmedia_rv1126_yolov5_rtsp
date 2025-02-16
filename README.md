# rockchip_rv1126_rv1106_yolov5_rtsp
rockchip_rv1126_rv1106_yolov5_rtsp

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
