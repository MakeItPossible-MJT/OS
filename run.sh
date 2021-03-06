#!/bin/bash

path="/home/mjt/Project/os"


sudo dd if=${path}/bootloader/boot.bin of=${path}/boot.img bs=512 count=1 conv=notrunc

sudo mount ${path}/boot.img /media/ -t vfat -o loop
sudo cp ${path}/kernel/kernel.bin /media/
sudo cp ${path}/bootloader/loader.bin /media/
sudo umount /media/

echo "mounted!"
