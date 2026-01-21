destination=./$1
rm -rf $destination
mkdir $destination
find . -type f -iname "ft_*" -exec cp {} $destination \;