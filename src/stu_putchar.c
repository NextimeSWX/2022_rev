/*
 * E89 Pedagogical & Technical Lab
 * project:     Rev
 * created on:  2022-12-20 - 11:30 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: stu_putchar.c
 */

#include <unistd.h>

void stu_putchar(char c)
{
    write(1 , &c, 1);
}
