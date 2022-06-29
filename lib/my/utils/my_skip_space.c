/*
** EPITECH PROJECT, 2021
** my_skip_space
** File description:
** Skip spaces
*/

#include "../my.h"

int skip_space(char const *str, int i)
{
    if (!str)
        return ERROR;
    while (str[i] == ' ')
        i += 1;
    return i;
}
