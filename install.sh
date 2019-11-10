#!/bin/bash

#Copyright University College London 2019
#Author: Alexander Whitehead, Institute of Nuclear Medicine, UCL
#For internal research only.

mkdir -p ./build
mkdir -p ./install
cd build 

../configure --prefix=$(readlink -f ../install) --enable-languages=c,c++ --disable-multilib --with-system-zlib

make
make install
