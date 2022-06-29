/*
** EPITECH PROJECT, 2021
** my_strupcase
** File description:
** Put first letter of string in uppercase
*/

#include <stddef.h>

char *my_strupcase(char *str)
{
    int i = 0;

    if (!str)
        return NULL;
    while (str[i] != '\0') {
        if (str [i] > 96 && str[i] < 123)
            str[i] = str[i] - 32;
        i += 1;
    }
    return str;
}
