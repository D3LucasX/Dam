#!/usr/bin/env bash
for (( i=1; i<=5; i++ ))
do
	if ((i == 3)); then
		echo saltamos el valor 3
		continue;
	fi
	echo" i = $i"
done
