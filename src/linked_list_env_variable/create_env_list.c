/*
** EPITECH PROJECT, 2022
** create_head
** File description:
** create_head
*/

#include <stddef.h>
#include <stdlib.h>
#include "mysh.h"

static void initialize_env_value(env_t *list)
{
    list->variable_name = NULL;
    list->prev = NULL;
    list->next = NULL;
}

env_t *create_env_list(env_t *list)
{
    list = malloc(sizeof(env_t));

    if (!list)
        return NULL;
    initialize_env_value(list);
    return list;
}
