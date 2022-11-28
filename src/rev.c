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

int rev(int size_read, char *buffer)
{
    char *str;

    buffer[size_read -1] = '\0';
    if (!buffer)
    return(0);
    while(size_read >= 0) {
        str = &buffer[size_read];
        write(1, str, 1);
        size_read -= 1;
    } stu_putchar('\n');
    return(0);
}
