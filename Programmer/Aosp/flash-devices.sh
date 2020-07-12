#!/bin/bash

echo -e "Start exec into bootloader"
adb reboot bootloader


echo -e "\n\nWaiting for response...\n\n"
sleep 5s


echo -e "Start fastboot flashall -w"
fastboot flashall -w

echo -e "\n\nDone"

