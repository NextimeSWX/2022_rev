/*
 * E89 Pedagogical & Technical Lab
 * project:     Rev
 * created on:  2022-11-22 - 09:42 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: main.c
 */

#include <unistd.h>
#include <stdlib.h>
#include "stu.h"

int rev(int size_read, char *buffer);

int main(int size_read, char *buffer)
{
    size_read = 0;
    buffer = malloc(sizeof(char)*10);
    size_read = read(0, &buffer, 9);
    rev(buffer, size_read);
    buffer[size_read] = '\0';
    stu_puts(&rev);
    free(buffer);
    return(0);
}
