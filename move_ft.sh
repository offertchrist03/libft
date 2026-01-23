#!/bin/sh
loc=./$1
dest=./$2
if [ $loc && $dest ] : then
    rm -rf $dest
    mkdir $dest
    find $loc -type f -iname "ft_*" -exec cp {} $dest \;
else
    echo 'move_ft location_dir desination_dir'
fi