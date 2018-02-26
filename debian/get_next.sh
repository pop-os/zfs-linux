#!/bin/sh

SUPPORT=$(cat debian/linux_compat)
MAJOR=$(echo $SUPPORT|cut -d'.' -f1)
MINOR=$(echo $SUPPORT|cut -d'.' -f2)
NEXT=$((MINOR+1))

echo "${MAJOR}.${NEXT}"
