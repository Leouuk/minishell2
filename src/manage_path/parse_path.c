/*
** EPITECH PROJECT, 2022
** mysh project header
** File description:
** main
*/

#include "mysh.h"
#include <stddef.h>
#include <string.h>

char *parse_path(char *path, char *arg)
{
    char *new_path = NULL;

    new_path = strtok(path, "=");
    if (!path || !arg)
        return NULL;
    while ((new_path = strtok(NULL, ":")) != NULL) {
        if ((new_path = search_new_path(new_path, arg)) != NULL)
            return new_path;
    }
    return NULL;
}
