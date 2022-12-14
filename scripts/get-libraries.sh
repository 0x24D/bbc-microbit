#!/bin/bash

declare -a libs=(
"lancaster-university/codal-core" 
"lancaster-university/codal-nrf52"
"lancaster-university/microbit-v2-samples" 
"microbit-foundation/codal-microbit-nrf5sdk"
)

pushd lib
for lib in ${libs[*]}; do
    git clone "https://github.com/$lib" --recurse-submodules --shallow-submodules --depth 1
done
git clone "https://github.com/lancaster-university/codal-microbit-v2" --branch v0.2.43 --depth 1
popd
