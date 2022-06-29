/*
** EPITECH PROJECT, 2021
** my_str_is_lower
** File description:
** Check for a lowercase character
*/

#include <stddef.h>
#include "../my.h"

int my_str_islower(char const *str)
{
    int i = 0;

    if (!str)
        return ERROR;
    while (str[i] != '\0') {
        if (str[i] <= 'z' && str[i] >= 'a')
            i += 1;
        else
            return SUCCESS;
    }
    return 1;
}
