      Epoch    GPU_mem   box_loss   obj_loss   cls_loss  Instances       Size
    499/499      5.71G     0.0188    0.01581          0         45        640: 100%|██████████| 234/234 [00:53<00:00,  4.38it/s]
                 Class     Images  Instances          P          R      mAP50   mAP50-95: 100%|██████████| 29/29 [00:02<00:00, 10.53it/s]
                   all        914       3894      0.932      0.887      0.927      0.756

500 epochs completed in 8.031 hours.
Optimizer stripped from runs/train/exp2/weights/last.pt, 14.4MB
Optimizer stripped from runs/train/exp2/weights/best.pt, 14.4MB

Validating runs/train/exp2/weights/best.pt...
Fusing layers... 
Model summary: 157 layers, 7012822 parameters, 0 gradients, 15.8 GFLOPs
                 Class     Images  Instances          P          R      mAP50   mAP50-95: 100%|██████████| 29/29 [00:03<00:00,  8.09it/s]
                   all        914       3894      0.931      0.888      0.927      0.756
Results saved to runs/train/exp2