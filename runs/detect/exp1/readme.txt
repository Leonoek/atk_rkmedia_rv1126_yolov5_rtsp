detect: weights=['runs/train/exp2/weights/best.pt'], source=runs/train/exp2/test_img, data=data/coco128.yaml, imgsz=[640, 640], conf_thres=0.25, iou_thres=0.45, max_det=1000, device=, view_img=False, save_txt=False, save_format=0, save_csv=False, save_conf=False, save_crop=False, nosave=False, classes=None, agnostic_nms=False, augment=False, visualize=False, update=False, project=runs/detect, name=exp, exist_ok=False, line_thickness=3, hide_labels=False, hide_conf=False, half=False, dnn=False, vid_stride=1
YOLOv5 🚀 2025-1-31 Python-3.8.20 torch-1.13.0+cu117 CUDA:0 (NVIDIA GeForce RTX 4070, 11994MiB)

Fusing layers... 
Model summary: 157 layers, 7012822 parameters, 0 gradients, 15.8 GFLOPs
image 1/2 /home/captain/rv1126/yolov5-master/runs/train/exp2/test_img/cows_test1.jpg: 640x640 5 cows, 3.8ms
image 2/2 /home/captain/rv1126/yolov5-master/runs/train/exp2/test_img/cows_test2.jpg: 640x640 3 cows, 3.9ms
Speed: 0.2ms pre-process, 3.8ms inference, 0.7ms NMS per image at shape (1, 3, 640, 640)
Results saved to runs/detect/exp8