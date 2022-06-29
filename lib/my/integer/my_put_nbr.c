/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** my_printf
*/

#include "../my.h"

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb <= 9)
        my_putchar(nb + 48);
    else {
        my_put_nbr(nb / 10);
        my_putchar(nb % 10 + 48);
    }
    return SUCCESS;
}
