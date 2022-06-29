/*
** EPITECH PROJECT, 2022
** mysh1 project
** File description:
** do_exit
*/

#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include "mysh.h"

int builtin_exit(char *arg[], env_t *list)
{
    if (!arg || !list)
        return ERROR;
    if ((my_strcmp(arg[0], "exit") == 0) && (arg[1] == NULL)) {
        my_putstr("exit\n");
        exit(EXIT_SUCCESS);
    } else if ((my_str_isnum(arg[1]) == 1) && (arg[2] == NULL)) {
        my_putstr("exit\n");
        exit(my_getnbr(arg[1]));
    } else {
        my_putstr("exit: Expression Syntax.\n");
        my_putstr("[sleopold@fedora ~]$ ");
    }
    return SUCCESS;
}
