/*
** EPITECH PROJECT, 2022
** mysh project header
** File description:
** main
*/

#include "my.h"
#include <stddef.h>
#include <dirent.h>

static int search_binary(char *arg, struct dirent *file, DIR *dir)
{
    while ((file = readdir(dir)) != NULL) {
        if ((my_strcmp(file->d_name, arg)) == 0) {
            return -1;
        }
    }
    return SUCCESS;
}

char *search_new_path(char *new_path, char *arg)
{
    DIR *dir = NULL;
    struct dirent *file = NULL;

    if ((dir = opendir(new_path)) != NULL) {
        if (search_binary(arg, file, dir) == -1)
            return new_path;
    }
    return NULL;
}
