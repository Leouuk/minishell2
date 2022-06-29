/*
** EPITECH PROJECT, 2022
** mysh1
** File description:
** environment_handling
*/

#include "mysh.h"

int env_handling(char *const env[])
{
    if (!env || !env[0]) {
        error_message(ERROR_ENV);
        return ERROR;
    }
    return SUCCESS;
}
