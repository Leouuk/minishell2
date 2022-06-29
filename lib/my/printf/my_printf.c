/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** lib
*/

#include <stdarg.h>
#include <stddef.h>
#include "../my.h"

static const flags_t manage_flag[] = {
    {.flag = 'b', .flags_function = &manage_unsigned_int_flags},
    {.flag = 'o', .flags_function = &manage_unsigned_int_flags},
    {.flag = 'u', .flags_function = &manage_unsigned_int_flags},
    {.flag = 'x', .flags_function = &manage_unsigned_int_flags},
    {.flag = 'X', .flags_function = &manage_unsigned_int_flags},
    {.flag = 'S', .flags_function = &manage_char_flags},
    {.flag = 's', .flags_function = &manage_char_flags},
    {.flag = 'c', .flags_function = &manage_char_flags},
    {.flag = '%', .flags_function = &manage_char_flags},
    {.flag = 'd', .flags_function = &decimal_flags},
    {.flag = 'i', .flags_function = &decimal_flags},
    {.flag = '\0', .flags_function = NULL}};

int check_flags(const char *flag, va_list argument)
{
    int i = 0;

    while (manage_flag[i].flag != '\0') {
        if (manage_flag[i].flag == flag[1]) {
            manage_flag[i].flags_function(flag, argument);
            return SUCCESS;
        }
        i += 1;
    }
    if (manage_flag[i].flag == '\0') {
        my_putchar(flag[0]);
        my_putchar(flag[1]);
    }
    return SUCCESS;
}

void manage_unsigned_int_flags(const char *flag, va_list argument)
{
    switch (flag[1]) {
    case 'b':
        my_put_nbrbase(va_arg(argument, unsigned int), "01");
        break;
    case 'u':
        my_put_nbrbase(va_arg(argument, unsigned int), "0123456789");
        break;
    case 'o':
        my_put_nbrbase(va_arg(argument, int), "01234567");
        break;
    case 'x':
        my_put_nbrbase(va_arg(argument, unsigned int), "0123456789abcdef");
        break;
    case 'X':
        my_put_nbrbase(va_arg(argument, unsigned int), "0123456789ABCDEF");
        break;
    default:
    }
}

void manage_char_flags(const char *flag, va_list argument)
{
    switch (flag[1]) {
    case 'c':
        my_putchar(va_arg(argument, int));
        break;
    case 's':
        my_putstr(va_arg(argument, char *));
        break;
    case '%':
        my_putchar('%');
        break;
    case 'S':
        my_print_octal(va_arg(argument, char *));
        break;
    default:
        break;
    }
}

int my_printf(const char *flag, ...)
{
    int i = 0;
    va_list argument;

    va_start(argument, flag);
    while (flag[i] != '\0') {
        if (flag[i] == '%') {
            check_flags(&flag[i], argument);
            i += 1;
        }
        else {
            my_putchar(flag[i]);
        }
        i += 1;
    }
    va_end(argument);
    return SUCCESS;
}
