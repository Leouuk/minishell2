/*
** EPITECH PROJECT, 2022
** mysh1 project
** File description:
** do_setenv
*/

#include <stdlib.h>
#include <stddef.h>
#include "mysh.h"

static void set_environment_variable(char *arg[])
{
    if (!arg[2])
        arg[1] = my_strcat(arg[1], "=");
    else
        arg[1] = my_strcat(my_strcat(arg[1], "="), arg[2]);
}

static int check_environment_variable_format(char *arg[])
{
    int i = 0;

    while (arg[i] != NULL)
        i += 1;
    if (i > 3) {
        my_printf("%s: Too many arguments.\n", arg[0]);
        return ERROR;
    }
    return SUCCESS;
}

static int check_environment_variable_name(char *arg[], env_t *list)
{
    if (!arg[1])
        return (builtin_env(arg, list));
    if (arg[1][0] >= '0' && arg[1][0] <= '9') {
        my_printf("%s: Variable name must begin with a letter.\n", arg[0]);
        return ERROR;
    }
    return SUCCESS;
}

int builtin_setenv(char *arg[], env_t *list)
{
    if (!arg || !list
    || check_environment_variable_name(arg, list) == ERROR
    || check_environment_variable_format(arg) == ERROR)
        return ERROR;
    else {
        set_environment_variable(arg);
        add_node_last(list, arg[1]);
    }
    return SUCCESS;
}
