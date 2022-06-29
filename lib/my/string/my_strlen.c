/*
** EPITECH PROJECT, 2021
** my_strlen
** File description:
** count the string lenght
*/

#include <stddef.h>

int my_strlen(char const *str)
{
    int i = 0;

    if (!str)
        return 84;
    while (str[i] != '\0')
        i += 1;
    return i;
}
