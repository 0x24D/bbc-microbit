#!/bin/bash

pushd build
cmake .. -DCMAKE_BUILD_TYPE=RelWithDebInfo -G "Unix Makefiles"
if [ $# == 1 ]; then
    make -j "$1"
    make -j "$1_bin"
    make -j "$1_hex"
else
    make -j
fi
popd
