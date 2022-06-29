/*
** EPITECH PROJECT, 2022
** mysh project header
** File description:
** function that exec cd builtin
*/

#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <string.h>
#include "mysh.h"

static char *home_directory(env_t *list)
{
    char *home_path = NULL;

    for (env_t *tmp = list->next; tmp != NULL; tmp = tmp->next) {
        if (my_strncmp(tmp->variable_name, "HOME=", 5) == 0)
            chdir(tmp->variable_name + 5);
    }
    return home_path;
}

static int check_is_file_exist(char *arg[])
{
    errno = 0;

    if (access(arg[1], F_OK) == -1) {
        my_printf("%s: %s.\n", arg[0], strerror(errno));
        return ERROR;
    }
    return SUCCESS;
}

static int count_number_argument(char *arg[])
{
    int nb_arg = 0;

    if (!arg)
        return ERROR;
    for (int i = 0; arg[i] != NULL; i++)
        nb_arg += 1;
    return nb_arg;
}

int builtin_cd(char *arg[], env_t *list)
{
    int nb_arg = count_number_argument(arg);
    errno = 0;

    if (!arg || !list)
        return ERROR;
    if (nb_arg > 2) {
        my_printf("%s: Too many arguments.\n", arg[0]);
        return ERROR;
    }
    if (my_strcmp(arg[0], "cd") == 0 && nb_arg == 1 && !arg[1]) {
        home_directory(list);
        return SUCCESS;
    }
    if (my_strcmp(arg[0], "cd") == 0 && check_is_file_exist(arg) == 0) {
        if (chdir(arg[1]) == -1)
            my_printf("%s: %s.\n", arg[0], strerror(errno));
        else
            return ERROR;
    }
    return SUCCESS;
}
