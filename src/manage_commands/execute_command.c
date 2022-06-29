/*
** EPITECH PROJECT, 2022
** mysh project header
** File description:
** function ptr
*/

#include <stddef.h>
#include "mysh.h"

static const command_t shell_command[] = {
    {.cmd = "cd", .fcptr = &builtin_cd},
    {.cmd = "env", .fcptr = &builtin_env},
    {.cmd = "exit", .fcptr = &builtin_exit},
    {.cmd = "setenv", .fcptr = &builtin_setenv},
    {.cmd = "unsetenv", .fcptr = &builtin_unsetenv},
    {.cmd = NULL, .fcptr = NULL},
};

const command_t *command_handling(char *arg[])
{
    for (int i = 0; shell_command[i].cmd != NULL; i += 1) {
        if (my_strcmp(shell_command[i].cmd, arg[0]) == 0)
            return &shell_command[i];
    }
    return NULL;
}

int exec_builtin(char *arg[], env_t *list)
{
    const command_t *command = NULL;

    command = command_handling(arg);
    if (!command)
        return ERROR;
    command->fcptr(arg, list);
    return SUCCESS;
}
