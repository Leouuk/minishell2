/*
** EPITECH PROJECT, 2022
** mysh2
** File description:
** get_signal
*/

#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "mysh.h"

int error_signal(int status)
{
    if (WIFSIGNALED(status)) {
        if (WCOREDUMP(status))
            my_putstr(SIGNAL_SEGFAULT);
        if (SIGFPE == status)
            my_putstr(SIGNAL_FLOATING);
        if (SIGFPE == status && WCOREDUMP(status)) {
            my_putstr(SIGNAL_SEGFAULT);
            my_putstr("&& Floating Point");
            my_putstr("Floating exception.\n");
        }
    }
    return SUCCESS;
}
