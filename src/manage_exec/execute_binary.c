/*
** EPITECH PROJECT, 2022
** mysh project header
** File description:
** exec_arg
*/

#include <unistd.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <sys/wait.h>
#include <signal.h>
#include <stdlib.h>
#include "mysh.h"

void execute_command(char *arg[], char *const env[], const char *path)
{
    errno = 0;

    if (execve(path, arg, env) == -1) {
        if (errno == ENOEXEC) {
            my_printf("%s: %s.\n", arg[0], strerror(errno));
            exit(EXIT_FAILURE);
        }
        if (errno == EACCES) {
            my_printf("%s: %s.\n", arg[0], strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
    my_printf("%s: Command not found.\n", arg[0]);
    exit(EXIT_FAILURE);
}

void create_new_process(char *arg[], char *const env[], const char *path)
{
    int status = 0;
    pid_t cpid = fork();

    if (cpid == -1 && errno == ENOENT) {
        my_printf("%s: %s.\n", arg[0], strerror(errno));
        exit(EXIT_FAILURE);
    } else if (cpid == 0)
        execute_command(arg, env, path);
    else {
        waitpid(cpid, &status, WUNTRACED);
        error_signal(status);
    }
}
