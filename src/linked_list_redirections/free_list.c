/*
** EPITECH PROJECT, 2022
** project header
** File description:
** free_list
*/

#include <stdlib.h>
#include "mysh.h"

void free_list(env_t *list)
{
    env_t *temp = NULL;

    if (!list)
        return;
    while (list != NULL) {
        temp = list;
        list = list->next;
        free(temp);
    }
}
