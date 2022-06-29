/*
** EPITECH PROJECT, 2021
** my_str_isprintable
** File description:
** Only display printable characters
*/

#include <stddef.h>
#include "../my.h"

int my_str_isprintable(char const *str)
{
    int i = 0;

    if (!str)
        return ERROR;
    while (str[i] != '\0') {
        if (str[i] >= ' ' && str[i] <= '~')
            i += 1;
        else
            return SUCCESS;
    }
    return 1;
}
