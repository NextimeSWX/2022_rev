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

void put_rev(int nb, char *str, char *buffer)
{
    int i;

    i = nb;
    while (buffer[i] != '\n' && i >= 0) {
        str = &buffer[i];
        write(1, str, 1);
        i -= 1;
    }
    stu_putchar('\n');
}

int rev(int size_read, char *buffer)
{
    char *str;
    int nb;

    str = 0;
    nb = 0;
    while (size_read > nb) {
        while (buffer[nb] != '\n' && buffer[nb] != '\0') {
            nb += 1;
        }
        nb -= 1;
        put_rev(nb, str, buffer);
        nb += 2;
    }
    return (0);
}
