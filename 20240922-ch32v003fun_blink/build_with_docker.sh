#!/bin/bash
TARGET=blink
set -xe
docker run -it --rm \
    -v $(pwd):/work \
    -v /dev:/dev \
    -w /work \
    -u $(id -u):$(id -g) \
    -e HOME=/work \
    -e USER=$(id -u) \
    -e GROUP=$(id -g) \
    ch32v003fun \
    make ${TARGET}.bin
minichlink -w ${TARGET}.bin flash -b