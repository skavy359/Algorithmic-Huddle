#!/bin/bash
read input
expr=$(echo "$input" | tr -d ' ')
result=$(awk "BEGIN {print $expr}")
printf "%.3f\n" "$result"