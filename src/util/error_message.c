/*
** EPITECH PROJECT, 2022
** mysh2
** File description:
** error_message
*/

#include <unistd.h>
#include "mysh.h"

void error_message(char const *str)
{
    if (!str)
        return;
    write(2, str, my_strlen(str));
}
