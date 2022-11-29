/*
 * E89 Pedagogical & Technical Lab
 * project:     Rev
 * created on:  2022-11-22 - 09:43 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: rev.c
 */

#include <unistd.h>
#include <stdlib.h>
#include "stu.h"

void put_rev(int i, char *str, char *buffer) {
    while(i >= 0) {
        str = &buffer[i];
        write(1, str, 1);
        i -= 1;
    }
}

int rev(int size_read, char *buffer)
{
    char *str;
    int i;

    i = 0;
    str = 0;
    if (size_read != '\n') {
        buffer[size_read -1] = '\0';
        i = size_read;
        put_rev(i, str, buffer);
    } else {
            while(size_read >= i) {
                while(buffer[i] != '\n' && buffer[i] != '\0') {
                    i += 1;
                }
                put_rev(i, str, buffer);
                i += 1;
            }
        }

    stu_putchar('\n');
    return(0);
}

