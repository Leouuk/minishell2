/*
** EPITECH PROJECT, 2022
** mysh project header
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>
#include <stddef.h>
#include "../my.h"

static char *my_convert_into_space(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == '\t' || str[i] == '\n') {
            str[i] = ' ';
        }
        i += 1;
    }
    return str;
}

static int my_count_words(char *str)
{
    int i = 0;
    int nb_words = 0;

    while (str[i] == ' ') {
        i += 1;
    }
    while (str[i] != '\0') {
        if (str[i] == ' ' && str[i + 1] >= '!' && str[i + 1] <= '~') {
            nb_words += 1;
        }
        i += 1;
    }
    return nb_words + 1;
}

static char **my_create_array(char **map, char *str, int pos)
{
    int i = 0;
    int nb_char = 0;

    while (str[i] == ' ')
        i += 1;
    while (str[i + 1] != ' ' && str[i] != '\0') {
        nb_char += 1;
        i += 1;
    }
    map[pos] = malloc(sizeof(char) * (nb_char + 2));
    if (!map)
        return NULL;
    return map;
}

static char **my_fill_array(char **map, char *str, int nb_words, int x)
{
    int i = 0;
    int y = 0;

    if (!map || !str)
        return NULL;
    while (str[i] != '\0' || str[i + 1] == '\0') {
        i = skip_space(str, i);
        while (str[i] != ' ' && str[i] != '\0') {
            map[y][x] = str[i];
            i += 1;
            x += 1;
        }
        i += 1;
        map[y][x] = '\0';
        x = 0;
        if (y == (nb_words - 1))
            return map;
        y += 1;
    }
    return map;
}

char **my_str_to_word_array(char **map, char *str)
{
    int nb_words = 0;
    int x = 0;

    if (!str)
        return NULL;
    str = my_convert_into_space(str);
    nb_words = my_count_words(str);
    if (nb_words <= 0)
        return NULL;
    map = malloc(sizeof(char *) * (nb_words + 1));
    if (!map)
        return NULL;
    map[nb_words] = NULL;
    for (int i = 0; i < nb_words; i += 1) {
        map = my_create_array(map, str, i);
    }
    map = my_fill_array(map, str, nb_words, x);
    return map;
}
