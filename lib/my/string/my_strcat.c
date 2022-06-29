/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** Concatenate two strings
*/

#include <stddef.h>
#include "../my.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int len = my_strlen(dest);

    if (!dest || !src)
        return NULL;
    while (src[i] != '\0') {
        dest[len + i] = src[i];
        i += 1;
    }
    dest[len + i] = '\0';
    return dest;
}
