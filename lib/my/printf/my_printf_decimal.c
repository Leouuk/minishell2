/*
** EPITECH PROJECT, 2022
** my
** File description:
** my_printf_other
*/

#include <stdarg.h>
#include "../my.h"

void decimal_flags(const char *flag, va_list arguments)
{
    my_put_nbr(va_arg(arguments, int));
}
