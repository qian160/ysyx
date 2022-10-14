#!/bin/bash

#see https://askubuntu.com/questions/1181762/imagemagickconvert-im6-q16-no-images-defined

convert slides.pdf \
  -sharpen "0x1.0" \
  -type truecolor -resize 400x300 slides.bmp

mkdir -p $NAVY_HOME/fsimg/share/slides/
rm $NAVY_HOME/fsimg/share/slides/*
mv *.bmp $NAVY_HOME/fsimg/share/slides/
