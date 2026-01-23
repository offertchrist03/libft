#!/bin/sh
dir=./$1
if [ $dir ]; then
    awk '
    /^(int|char|size_t|void|\*)/ &&
    /ft_/
    {}
    ' $1/ft_* | awk '{print $0, ";"}' | awk 'sub(/ ;/, ";")' > ./$1/prototype.txt
else
    echo 'prototype_ft target_dir'
fi