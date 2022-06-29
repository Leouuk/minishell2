/*
** EPITECH PROJECT, 2021
** my_getnbr
** File description:
** convert string of char to int
*/

#include <stddef.h>
#include "../my.h"

int my_getnbr(char const *str)
{
    long nbr = 0;
    int i = 0;
    int negative = 1;

    if (!str)
        return ERROR;
    while (str[i] != '\0') {
        if (str[i] == '-')
            negative = negative * (-1);
        if ((str[i] >= '0') && (str[i] <= '9'))
            nbr = nbr + (str[i] - '0');
        if ((str[i + 1] >= '0') && (str[i + 1] <= '9'))
            nbr = nbr * 10;
        if ((str[i + 1] < '0' || str[i + 1] > '9') && nbr > 0)
            return (nbr * negative);
        i += 1;
    }
    if (nbr > 2147483646 || nbr < -2147483646)
        return -1;
    return nbr;
}
