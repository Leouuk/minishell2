/*
** EPITECH PROJECT, 2022
** lib
** File description:
** open a file
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../my.h"

char open_file(const char *filepath)
{
    int fd = open(filepath, O_RDONLY);

    if (fd == -1 || !filepath)
        return 84;
    return fd;
}
