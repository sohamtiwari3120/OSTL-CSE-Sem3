#!/bin/bash
echo Enter the number below!
read num
rem=`expr $num \% 2`
if [ $rem -eq 0 ]
then
	echo even
else 
	echo odd
fi
exit 0