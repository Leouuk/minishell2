/*
** EPITECH PROJECT, 2022
** minishell2
** File description:
** struct
*/

#ifndef INFO_H_
    #define INFO_H_

    #include "mysh.h"

typedef struct env_s {
    char *variable_name;
    struct env_s *next;
    struct env_s *prev;
} env_t;

typedef struct redirec_s {
    char *path;
    char **arg;
    struct redirec_s *next;
    struct redirec_s *prev;
} redirec_t;

typedef struct mysh_s {
    env_t *env;
    redirec_t *redir;
} mysh_t;

typedef struct commands_s {
    char *cmd;
    int (*fcptr)(char *[], env_t *);
} command_t;

const command_t *command_handling(char *arg[]);

#endif
