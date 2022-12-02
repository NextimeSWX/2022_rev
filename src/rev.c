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



#include <stdio.h>


void put_rev(int nb, int size_read, char *str, char *buffer)
{
    int i;
    int j;

    i = nb;
    j = 0;
    while(j != size_read) {
        while(buffer[i] != '\n' && i >= 0) {
            str = &buffer[i];
            write(1, str, 1);
            i -= 1;
        }
    stu_putchar('\n');
    }
}

int rev(int size_read, char *buffer)
{
    char *str;
    int nb;

    str = 0;
    nb = 0;/*
             if (size_read != '\n') {
             nb = size_read;
             buffer[size_read] = '\0';
             put_rev(nb, str, buffer);
             } else {*/
    while(size_read >= nb) {
        while(buffer[nb] != '\n' && buffer[nb] != '\0') {
            nb += 1;
        }
        nb -= 1;
        put_rev(nb, size_read, str, buffer);
        //}
        nb += 2;
    }
    return(0);
}
