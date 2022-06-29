/*
** EPITECH PROJECT, 2021
** my_strncpy
** File description:
** Copy n elements of a string
*/

#include <stddef.h>

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    if (!src || !dest)
        return NULL;
    while (src[i] != '\0' && i <= n) {
        dest[i] = src[i];
        i += 1;
    }
    dest[i] = '\0';
    return dest;
}
