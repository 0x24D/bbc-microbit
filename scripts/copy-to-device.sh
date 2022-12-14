#!/bin/bash

if [ $# -ne 1 ]; then
    exit 1;
fi

dir="/run/media/$(whoami)/MICROBIT"

if [ -d "$dir" ]; then
    cp -v "bin/$1.hex" "$dir/MICROBIT.hex"
fi
