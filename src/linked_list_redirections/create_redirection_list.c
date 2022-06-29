/*
** EPITECH PROJECT, 2022
** create_head
** File description:
** create_head
*/

#include <stddef.h>
#include <stdlib.h>
#include "mysh.h"

static void initialize_redirection_value(redirec_t *redir_list)
{
    redir_list->path = NULL;
    redir_list->arg = NULL;
    redir_list->prev = NULL;
    redir_list->next = NULL;
}

redirec_t *create_redirection_list(redirec_t *redir_list)
{
    redir_list = malloc(sizeof(redirec_t));

    if (!redir_list)
        return NULL;
    initialize_redirection_value(redir_list);
    return redir_list;
}
