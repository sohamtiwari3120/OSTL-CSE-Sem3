#!/bin/bash
echo enter a number:
read number
if [ $number -lt 0 ]
	then 
		echo negative
elif [ $number -gt 0 ]
	then 
		echo positive
elif [ $number -eq 0 ]
	then 
		echo zero
fi
exit 0