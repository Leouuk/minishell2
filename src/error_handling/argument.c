/*
** EPITECH PROJECT, 2022
** mysh1 project header
** File description:
** error_hundling
*/

#include "mysh.h"

int arg_handling(int argc, char *const argv[])
{
    if (argc != 1 || !argv) {
        error_message(ERROR_ARGUMENT);
        return ERROR;
    }
    return SUCCESS;
}
