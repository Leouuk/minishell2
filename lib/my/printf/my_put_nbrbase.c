/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** my_printf
*/

#include <stddef.h>
#include "../my.h"

int my_put_nbrbase(int nb, char const *str)
{
    int base = my_strlen(str);
    if (!str)
        return ERROR;
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb < base)
        my_putchar(nb + 48);
    else {
        my_put_nbrbase(nb / base, str);
        my_putchar(nb % base + 48);
    }
    return SUCCESS;
}
