/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** Display a string
*/

#include <stddef.h>
#include "../my.h"

int my_putstr(char const *str)
{
    int i = 0;

    if (!str)
        return ERROR;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i += 1;
    }
    return SUCCESS;
}
