#!/bin/bash
declare -A mp

while read -r line
do
    for word in $line
    do
        ((mp[$word]++))
    done

done<words.txt

for word in "${!mp[@]}"
do
    echo "$word ${mp[$word]}"
    
done | sort -k2 -nr