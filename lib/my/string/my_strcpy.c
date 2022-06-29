/*
** EPITECH PROJECT, 2021
** my_strcpy
** File description:
** Copy a string
*/

#include <stddef.h>

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    if (!src || !dest)
        return NULL;
    while (src[i] != '\0') {
        dest [i] = src [i];
        i += 1;
    }
    dest[i] = '\0';
    return dest;
}
