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

int main(void)
{
    int size_read;
    char *buffer;

    size_read = 0;
    buffer = malloc(sizeof(char) * 1000);
    size_read = read(0, buffer, 999);
    if (!buffer) {
        return (0);
    }
    rev(size_read, buffer);
    buffer[size_read] = '\0';
    free(buffer);
    return (0);
}
