#!/bin/sh

gcc -Wall -Wextra -Werror -c *.c
ar -rc libft.a *.o
rm -f *.o
