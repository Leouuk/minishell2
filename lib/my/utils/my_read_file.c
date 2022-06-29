/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** file
*/

#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

char *read_file(const char *filepath, int fd)
{
    int size = 0;
    char *array = NULL;
    struct stat st;

    if (fd == -1 || !filepath)
        return NULL;
    stat(filepath, &st);
    size = st.st_size + 1;
    array = malloc(sizeof(char) * size);
    if (read(fd, array, size) < 1 || !array)
        return NULL;
    array[size] = '\0';
    close (fd);
    return (array);
}
