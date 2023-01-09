#!/bin/bash

gcc -Wall -pedantic -Werror -Wextra -c *.c

ac -rc liball.a *.c

ranlib liball.a
