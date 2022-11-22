/*
 * E89 Pedagogical & Technical Lab
 * project:     Rev
 * created on:  2022-11-22 - 09:41 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: stu_strlen.c
 */

unsigned int stu_strlen (const char *str)
{
    unsigned int t;
    t = 0;
    while (str[t] != '\0')
        {
            t = t + 1;
        }
    return (t);
}
