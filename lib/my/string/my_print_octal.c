/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** Display a string
*/

#include "../my.h"

int my_print_octal(char const *str)
{
    for (int i = 0; str[i] != '\0'; i += 1) {
        if (str[i] > ' ' && str[i] < '~')
            my_putchar(str[i]);
        if (str[i] < '\b') {
            my_putchar('\\');
            my_putchar('0');
            my_putchar('0');
            my_putchar(str[i] + '0');
            return SUCCESS;
        }
        if (str[i] > '\a' && str[i] < ' ') {
            my_putchar('\\');
            my_putchar('0');
            my_put_nbrbase(str[i], "01234567");
        } else if (str[i] == '~') {
            my_putchar('\\');
            my_put_nbr(177);
        }
    }
    return SUCCESS;
}
