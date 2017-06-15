#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/starwels.png
ICON_DST=../../src/qt/res/icons/starwels.ico
convert ${ICON_SRC} -resize 16x16 starwels-16.png
convert ${ICON_SRC} -resize 32x32 starwels-32.png
convert ${ICON_SRC} -resize 48x48 starwels-48.png
convert starwels-16.png starwels-32.png starwels-48.png ${ICON_DST}

