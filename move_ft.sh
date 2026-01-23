#!/bin/sh
loc=./$1
dest=./$2
if [ $loc ] && [ $dest ]; then
    find $loc -type f -iname "ft_*" -exec cp {} $dest \;
    find $loc -type f -iname "ft_*"
else
    echo 'move_ft location_dir desination_dir'
fi