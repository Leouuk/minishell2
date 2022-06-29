/*
** EPITECH PROJECT, 2021
** my_str_isupper
** File description:
** Check for an uppercase letter
*/

#include <stddef.h>
#include "../my.h"

static int upper_lenght(char const *str)
{
    int i = 0;

    if (!str)
        return ERROR;
    while (str[i] != '\0') {
        i += 1;
    }
    return i;
}

int my_str_isupper(char const *str)
{
    int i = 0;
    int uppercase = 0;
    int new_len = upper_lenght(str);

    if (!str)
        return ERROR;
    while (str[i] != '\0') {
        if (str[i] <= 'Z' && str[i] >= 'A')
            uppercase += 1;
        i += 1;
    }
    if (uppercase == new_len)
        return 1;
    else
        return SUCCESS;
}
