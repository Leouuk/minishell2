/*
** EPITECH PROJECT, 2021
** my_str_isalpha
** File description:
** Check if a string only contain alphabetic characters
*/

#include <stddef.h>
#include "../my.h"

int my_str_isalpha(char const *str)
{
    int i = 0;

    if (!str)
        return ERROR;
    while (str[i] != '\0') {
        if ((str[i] <= 'Z' && str[i] >= 'A')
        || (str[i] <= 'z' && str[i] >= 'a'))
            i += 1;
        else
            return SUCCESS;
    }
    return 1;
}
