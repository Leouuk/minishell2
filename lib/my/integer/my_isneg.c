/*
** EPITECH PROJECT, 2021
** my_isneg
** File description:
** Verification of int (+ or -)
*/

#include "../my.h"

int my_isneg(int nb)
{
    if (nb < 0)
        my_putchar('N');
    else
        my_putchar('P');
    return SUCCESS;
}
