/*
** EPITECH PROJECT, 2021
** my_str_isnum
** File description:
** Check for a digit (0 trough 9)
*/

#include <stddef.h>
#include "../my.h"

int my_str_isnum(char const *str)
{
    int i = 0;

    if (!str)
        return ERROR;
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9')
            i += 1;
        else
            return SUCCESS;
    }
    return 1;
}
