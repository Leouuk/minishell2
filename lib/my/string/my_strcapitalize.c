/*
** EPITECH PROJECT, 2021
** mr_strcapitalize
** File description:
** Capitalize first letter of word
*/

#include <stddef.h>

char *my_strcapitalize(char *str)
{
    int i = 1;

    if (!str)
        return NULL;
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] -= 32;
    while (str[i] != '\0') {
        if ((str[i - 1] >= 23 && str[i - 1] <= 47)
        || (str[i - 1] <= ';' && str[i + 1] <= 0) || str[i + 1] >= 9)
            str[i + 1] -= 32;
        i += 1;
    }
    return str;
}
