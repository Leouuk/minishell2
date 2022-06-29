/*
** EPITECH PROJECT, 2022
** mysh project header
** File description:
** get the path
*/

#include <stddef.h>
#include <stdlib.h>
#include "mysh.h"

char *find_path(char *const env[], char *path)
{
    int i = 0;
    int len = 0;

    while (my_strncmp(env[i], "PATH=", 5) != 0)
        i += 1;
    len = my_strlen(env[i]);
    path = malloc(sizeof(char) * (len + 1));
    if (!path)
        return NULL;
    path[len] = '\0';
    path = my_strcpy(path, env[i]);
    return path;
}
