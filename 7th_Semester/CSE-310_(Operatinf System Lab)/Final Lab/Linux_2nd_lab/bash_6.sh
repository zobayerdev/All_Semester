#!/bin/bash
echo "Enter Two Number"
read a
read b
sum=$(( $a + $b ))
sub=$(( $a - $b ))
mul=$(( $a * $b )) 
echo "Sum: $sum"
echo "Sub: $sub"
echo "mul: $mul"
