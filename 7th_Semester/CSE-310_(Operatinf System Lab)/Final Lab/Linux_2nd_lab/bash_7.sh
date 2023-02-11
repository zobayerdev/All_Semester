#!/bin/bash
echo "Enter value of : "
read a
read b
if [ $a -gt $b ]
then 
echo "$a is biggest"
else
echo "$b is biggest"
fi
