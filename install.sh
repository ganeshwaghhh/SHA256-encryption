#!/bin/bash

sudo apt-get update
sudo apt-get install libssl-dev

gcc -o encryption encryption.c -lssl -lcrypto

./encryption

