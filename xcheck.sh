#!/bin/bash

find . -type f -name "*.c" -exec ccf -c {} \;

rm *.o

xnorm
