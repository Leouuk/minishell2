/*
** EPITECH PROJECT, 2021
** my_find_prime_sup
** File description:
** my_find_prime_sup
*/

#include "../my.h"

int my_is_prime(int nb)
{
    int i = 2;

    if (nb <= 0)
        return ERROR;
    while (i < nb) {
        if (nb % i > 0)
            i += 1;
        else
            return SUCCESS;
    }
    return 1;
}

int my_find_prime_sup(int nb)
{
    int other_prime = nb;

    if (nb <= 2)
        return 2;
    while (my_is_prime(other_prime) != 1) {
        other_prime += 1;
    }
    return other_prime;
}
