/*
** EPITECH PROJECT, 2021
** my_strncmp
** File description:
** Day 06
*/

#include <stddef.h>
#include "../my.h"

int my_strncmp(char *const s1, char *const s2, int n)
{
    int i = 0;

    if (!s1 || !s2 || i == n)
        return ERROR;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < (n - 1)) {
        i += 1;
    }
    return (s1[i] - s2[i]);
}
