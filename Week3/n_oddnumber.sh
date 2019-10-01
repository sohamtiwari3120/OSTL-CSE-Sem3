#!/bin/bash
echo Enter the number below!
read num
k=0
i=1
echo $num odd numbers are:
while [ $k -lt $num ]
do
	echo $i
	i=`expr $i + 2`
	k=`expr $k + 1`
done
exit 0