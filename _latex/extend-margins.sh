#!/bin/sh

if [ $# -lt 1 ] ; then
  echo "Specify file to extend margins"
  exit 1
fi

echo gs -o "$(basename "$1")-wide.pdf" -sDEVICE=pdfwrite \
    -dDEVICEWIDTHPOINTS=420 -dDEVICEHEIGHTPOINTS=272.13 \
    -dFIXEDMEDIA -dPDFFitPage \
    -c "<</Install {0 0 translate 0 0 translate}>> setpagedevice" \
    -f "$1"
