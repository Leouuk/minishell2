/*
** EPITECH PROJECT, 2022
** lib
** File description:
** fill memory with a constant byte
*/

#include <string.h>

void *my_memset(char *str, int value, size_t count)
{
    if (!str)
        return;
    for (size_t i = 0; i < count; i = i + 1) {
        str[i] = value;
    }
}
