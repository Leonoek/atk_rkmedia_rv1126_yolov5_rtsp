#ifndef _YOLOV5_RTSP_H
#define _YOLOV5_RTSP_H

#include <assert.h>
#include <fcntl.h>
#include <getopt.h>
#include <signal.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

#include "im2d.h"
#include "rga.h"
#include "rkmedia_api.h"
#include "rkmedia_venc.h"
#include "sample_common.h"
#include "opencv2/opencv.hpp"
#include "librtsp/rtsp_demo.h"

using namespace cv;

rtsp_demo_handle g_rtsplive = NULL;
static rtsp_session_handle g_rtsp_session;

void *venc_rtsp_tidp(void *args);

#endif
