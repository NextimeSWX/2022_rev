/*
 * E89 Pedagogical & Technical Lab
 * project:     Rev
 * created on:  2022-11-22 - 09:40 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: stu_puts.c
 */

#include <unistd.h>
#include "stu.h"

int stu_puts (const char *str)
{
    int m;
    int nb;

    m = stu_strlen(str);
    nb = write(1, str, sizeof(char)*m);
    m = m + 1;
    return (nb);
}
