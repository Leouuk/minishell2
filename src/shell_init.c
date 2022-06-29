/*
** EPITECH PROJECT, 2022
** mysh project lister
** File description:
** calling function
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <stddef.h>
#include "mysh.h"

static void shell_loop(char *const env[], env_t *list)
{
    char *command = NULL;
    char **arg = NULL;
    char *path = NULL;
    size_t len = 0;
    ssize_t size = 0;

    my_putstr("[sleopold@fedora ~]$ ");
    while ((size = getline(&command, &len, stdin)) != -1) {
        arg = my_str_to_word_array(arg, command);
        path = return_path(env, path, arg);
        if (exec_builtin(arg, list) != 0)
            create_new_process(arg, env, path);
        my_putstr("[sleopold@fedora ~]$ ");
    }
    my_putstr("exit\n");
    free(command);
}

int shell_initialisation(int argc, char *const argv[], char *const env[])
{
    env_t *list = NULL;
    list = create_env_list(list);

    if (!env || !list || arg_handling(argc, argv) == ERROR
    || env_handling(env) == ERROR)
        return ERROR;
    for (int i = 0; env[i] != NULL; i += 1)
        list = add_node_last(list, env[i]);
    shell_loop(env, list);
    free_list(list);
    return SUCCESS;
}
