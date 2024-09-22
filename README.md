# CH32V203のテストコード

## ch32v003fun について

現状のUbuntu 24.04のgccで動かないため、ビルド用のDockerイメージを作成し、その中でビルドを行っています。

- [Dockerfile ./ch32v003fun.Dockerfile](./ch32v003fun.Dockerfile)
- [docker buildのシェルスクリプト ./build_ch32v003fun_docker.sh](./build_ch32v003fun_docker.sh)
- [docker内でビルドして、書き込むのシェルスクリプト ./20240922-ch32v003fun_blink/build_with_docker.sh](./20240922-ch32v003fun_blink/build_with_docker.sh)

## WCH公式SDKの利用ついて

環境構築に PlatformIO を利用しています
