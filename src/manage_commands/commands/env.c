/*
** EPITECH PROJECT, 2022
** mysh project
** File description:
** do_env
*/

#include <stddef.h>
#include "mysh.h"

int builtin_env(char *arg[], env_t *list)
{
    if (!arg || !list)
        return ERROR;
    for (env_t *tmp = list->next; tmp != NULL; tmp = tmp->next) {
        my_printf("%s\n", tmp->variable_name);
    }
    return SUCCESS;
}
