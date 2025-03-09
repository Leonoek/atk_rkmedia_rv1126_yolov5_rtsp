train: weights=yolov5m.pt, cfg=, data=data/my.yaml, hyp=data/hyps/hyp.scratch-low.yaml, epochs=500, batch_size=16, imgsz=640, rect=False, resume=False, nosave=False, noval=False, noautoanchor=False, noplots=False, evolve=None, evolve_population=data/hyps, resume_evolve=None, bucket=, cache=None, image_weights=False, device=, multi_scale=False, single_cls=False, optimizer=SGD, sync_bn=False, workers=8, project=runs/train, name=exp, exist_ok=False, quad=False, cos_lr=False, label_smoothing=0.0, patience=100, freeze=[0], save_period=-1, seed=0, local_rank=-1, entity=None, upload_dataset=False, bbox_interval=-1, artifact_alias=latest, ndjson_console=False, ndjson_file=False
github: skipping check (not a git repository), for updates see https://github.com/ultralytics/yolov5
YOLOv5 🚀 2025-1-31 Python-3.8.20 torch-1.13.0+cu117 CUDA:0 (NVIDIA GeForce RTX 4070, 11994MiB)

hyperparameters: lr0=0.01, lrf=0.01, momentum=0.937, weight_decay=0.0005, warmup_epochs=3.0, warmup_momentum=0.8, warmup_bias_lr=0.1, box=0.05, cls=0.5, cls_pw=1.0, obj=1.0, obj_pw=1.0, iou_t=0.2, anchor_t=4.0, fl_gamma=0.0, hsv_h=0.015, hsv_s=0.7, hsv_v=0.4, degrees=0.0, translate=0.1, scale=0.5, shear=0.0, perspective=0.0, flipud=0.0, fliplr=0.5, mosaic=1.0, mixup=0.0, copy_paste=0.0
Comet: run 'pip install comet_ml' to automatically track and visualize YOLOv5 🚀 runs in Comet
TensorBoard: Start with 'tensorboard --logdir runs/train', view at http://localhost:6006/
Overriding model.yaml nc=80 with nc=1

                 from  n    params  module                                  arguments                     
  0                -1  1      5280  models.common.Conv                      [3, 48, 6, 2, 2]              
  1                -1  1     41664  models.common.Conv                      [48, 96, 3, 2]                
  2                -1  2     65280  models.common.C3                        [96, 96, 2]                   
  3                -1  1    166272  models.common.Conv                      [96, 192, 3, 2]               
  4                -1  4    444672  models.common.C3                        [192, 192, 4]                 
  5                -1  1    664320  models.common.Conv                      [192, 384, 3, 2]              
  6                -1  6   2512896  models.common.C3                        [384, 384, 6]                 
  7                -1  1   2655744  models.common.Conv                      [384, 768, 3, 2]              
  8                -1  2   4134912  models.common.C3                        [768, 768, 2]                 
  9                -1  1   1476864  models.common.SPPF                      [768, 768, 5]                 
 10                -1  1    295680  models.common.Conv                      [768, 384, 1, 1]              
 11                -1  1         0  torch.nn.modules.upsampling.Upsample    [None, 2, 'nearest']          
 12           [-1, 6]  1         0  models.common.Concat                    [1]                           
 13                -1  2   1182720  models.common.C3                        [768, 384, 2, False]          
 14                -1  1     74112  models.common.Conv                      [384, 192, 1, 1]              
 15                -1  1         0  torch.nn.modules.upsampling.Upsample    [None, 2, 'nearest']          
 16           [-1, 4]  1         0  models.common.Concat                    [1]                           
 17                -1  2    296448  models.common.C3                        [384, 192, 2, False]          
 18                -1  1    332160  models.common.Conv                      [192, 192, 3, 2]              
 19          [-1, 14]  1         0  models.common.Concat                    [1]                           
 20                -1  2   1035264  models.common.C3                        [384, 384, 2, False]          
 21                -1  1   1327872  models.common.Conv                      [384, 384, 3, 2]              
 22          [-1, 10]  1         0  models.common.Concat                    [1]                           
 23                -1  2   4134912  models.common.C3                        [768, 768, 2, False]          
 24      [17, 20, 23]  1     24246  models.yolo.Detect                      [1, [[10, 13, 16, 30, 33, 23], [30, 61, 62, 45, 59, 119], [116, 90, 156, 198, 373, 326]], [192, 384, 768]]
Model summary: 291 layers, 20871318 parameters, 20871318 gradients, 48.2 GFLOPs

Transferred 475/481 items from yolov5m.pt
AMP: checks passed ✅
optimizer: SGD(lr=0.01) with parameter groups 79 weight(decay=0.0), 82 weight(decay=0.0005), 82 bias
train: Scanning /home/captain/rv1126/cows/coco_cow/labels/train.cache... 3732 images, 1 backgrounds, 0 corrupt: 100%|██████████| 3732/3732 [00:00<?, ?it/s]
val: Scanning /home/captain/rv1126/cows/coco_cow/labels/val.cache... 914 images, 0 backgrounds, 0 corrupt: 100%|██████████| 914/914 [00:00<?, ?it/s]

AutoAnchor: 4.72 anchors/target, 0.997 Best Possible Recall (BPR). Current anchors are a good fit to dataset ✅
Plotting labels to runs/train/exp4/labels.jpg... 
Image sizes 640 train, 640 val
Using 8 dataloader workers
Logging results to runs/train/exp4
Starting training for 500 epochs...


