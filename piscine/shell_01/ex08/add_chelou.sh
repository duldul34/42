#!/bin/bash

echo $FT_NBR1 + $FT_NBR2 | sed "s/\'/0/g" | tr '\\\"\?\!' '1-4' | tr 'mrdoc' '0-4' | xargs echo 'obase=13; ibase=5;' | bc | tr '0-9ABC' 'gtaio luSnemf'
