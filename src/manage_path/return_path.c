/*
** EPITECH PROJECT, 2022
** mysh project header
** File description:
** call functions that find path and test binaries
*/

#include <stddef.h>
#include "mysh.h"

char *return_path(char *const env[], char *path, char *arg[])
{
    if (!env || !arg)
        return NULL;
    path = find_path(env, path);
    path = parse_path(path, arg[0]);
    path = my_strcat(path, "/");
    path = my_strcat(path, arg[0]);
    return path;
}
