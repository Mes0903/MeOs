make
qemu-system-aarch64 -M raspi3 -nographic -serial null -chardev stdio,id=uart1 -serial chardev:uart1 -monitor none -kernel kernel8.img