/*
** EPITECH PROJECT, 2022
** create_node
** File description:
** create_node
*/

#include <stddef.h>
#include <stdlib.h>
#include "mysh.h"

env_t *add_node_last(env_t *list, char *const new_env_variable)
{
    env_t *node = malloc(sizeof(env_t));
    env_t *tmp = list;

    if (!node)
        return NULL;
    while (tmp->next != NULL)
        tmp = tmp->next;
    node->variable_name = new_env_variable;
    node->next = NULL;
    node->prev = tmp;
    tmp->next = node;
    return list;
}
