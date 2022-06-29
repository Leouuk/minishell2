/*
** EPITECH PROJECT, 2021
** my_find_prime_sup
** File description:
** my_find_prime_sup
*/
#include <unistd.h>
#include "../my.h"

void error_message(char const *str)
{
    if (!str)
        return;
    write(2, str, my_strlen(str));
}
