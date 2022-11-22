/*
 * E89 Pedagogical & Technical Lab
 * project:     Rev
 * created on:  2022-11-22 - 09:43 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: rev.c
 */

#include <stdio.h>






#include <unistd.h>
#include <stdlib.h>
#include "stu.h"

int rev(int size_read, char *buffer, char *rev)
{
    int i;

    i = size_read;
    if (!buffer)
        return(0);
    while(i >= 0) {
        rev == buffer[i];
        stu_puts(rev);
        i -= 1;
        return(0);
    }
}
