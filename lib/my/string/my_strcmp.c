/*
** EPITECH PROJECT, 2021
** my_strcmp
** File description:
** Count total of string, then compare two strings
*/

#include <stddef.h>
#include "../my.h"

int my_strcmp(char *const s1, char *const s2)
{
    int i = 0;

    if (!s1 || !s2)
        return ERROR;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
        i += 1;
    }
    return (s1[i] - s2[i]);
}
