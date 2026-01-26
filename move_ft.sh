#!/bin/sh

if [ $1 ] && [ $2 ]; then
    loc=./$1
    dest=./$2

    find $loc -type f -iname "ft_*" -exec cp {} $dest \;
    find $loc -type f -iname "ft_*"
else
    echo 'move_ft location_dir desination_dir'
fi