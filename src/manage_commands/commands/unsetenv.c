/*
** EPITECH PROJECT, 2022
** mysh1 project
** File description:
** do_unsetenv
*/

#include <stdlib.h>
#include <errno.h>
#include <stddef.h>
#include "mysh.h"

static void unset_environment_variable(char *arg[], env_t *env_list)
{
    int index_environment_variable = 0;
    int lenght = my_strlen(arg[1]);
    env_t *tmp = env_list;

    while (tmp->next != NULL) {
        if (my_strncmp(arg[1], tmp->variable_name, lenght) == 0) {
            tmp->next->prev = tmp->prev;
            tmp->prev->next = tmp->next;
            tmp->prev = NULL;
            index_environment_variable = 1;
            free(tmp);
            return;
        }
        tmp = tmp->next;
    }
    if ((my_strncmp(arg[1], tmp->variable_name, lenght) == 0)
    && (index_environment_variable != 1)) {
        tmp->prev->next = NULL;
        tmp->prev = NULL;
    }
}

int builtin_unsetenv(char *arg[], env_t *list)
{
    errno = 0;
    int nb_arg = 0;

    if (!arg || !list)
        return ERROR;
    for (; arg[nb_arg] != NULL; ++nb_arg)
        nb_arg += 1;
    if (nb_arg < 2)
        my_printf("%s: Too few arguments.\n", arg[0]);
    if (my_strcmp(arg[1], "*") == SUCCESS)
        free_list(list);
    else
        unset_environment_variable(arg, list);
    return SUCCESS;
}
