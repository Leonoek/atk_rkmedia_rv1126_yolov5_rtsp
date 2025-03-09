      Epoch    GPU_mem   box_loss   obj_loss   cls_loss  Instances       Size
    499/499      9.78G    0.01395    0.01136          0         45        640: 100%|██████████| 234/234 [02:24<00:00,  1.62it/s]
                 Class     Images  Instances          P          R      mAP50   mAP50-95: 100%|██████████| 29/29 [00:04<00:00,  5.90it/s]
                   all        914       3894      0.944      0.911      0.946       0.83

500 epochs completed in 20.877 hours.
Optimizer stripped from runs/train/exp4/weights/last.pt, 42.1MB
Optimizer stripped from runs/train/exp4/weights/best.pt, 42.1MB

Validating runs/train/exp4/weights/best.pt...
Fusing layers... 
Model summary: 212 layers, 20852934 parameters, 0 gradients, 47.9 GFLOPs
                 Class     Images  Instances          P          R      mAP50   mAP50-95: 100%|██████████| 29/29 [00:05<00:00,  5.22it/s]
                   all        914       3894      0.947       0.91      0.946      0.832
Results saved to runs/train/exp4