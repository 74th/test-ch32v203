FROM ubuntu:22.04

RUN apt-get update && apt-get install -y build-essential libnewlib-dev gcc-riscv64-unknown-elf libusb-1.0-0-dev libudev-dev gdb-multiarch
