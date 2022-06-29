/*
** EPITECH PROJECT, 2022
** mysh1 project header
** File description:
** library structures prototypes
*/

#ifndef MYSH_HEADER
    #define MYSH_HEADER

    #define ERROR 84
    #define SUCCESS 0
    #define ERROR_ARGUMENT "Error invalid argument.\n"
    #define ERROR_ENV "Environment variable is not properly set.\n"
    #define SIGNAL_SEGFAULT "Segmentation fault (core dumped)\n"
    #define SIGNAL_FLOATING "Floating exception (coredumped)\n"
    #include "linked_list.h"
    #include "struct.h"
    #include "my.h"
/*
* @brief Create a new process object
*
* @param arg
* @param env
* @param path
*/
void create_new_process(char *arg[], char *const env[], const char *path);

/*=============================INIT SHELL====================================*/

/*
* @brief init shell program & main shell loop
*
* @param env
* @param list
* @return int
*/
int shell_initialisation(int argc, char *const argv[], char *const env[]);

/*=============================EXECUTION=====================================*/

/*
 * @brief execute the command to run followed by optional arguments
 *
 * @param arg
 * @param env
 * @param path
*/
void execute_command(char *arg[], char *const env[], const char *path);

/*
 * @brief execute shell builtin (env, setenv, unsetenv, exit, cd)
 *
 * @param arg
 * @param list
 * @return int
 */
int exec_builtin(char *arg[], env_t *list);

/*
 * @brief array of function pointer linked to the shell builtin commands
 *
 * @param arg
 * @return const command_t*
 */
const command_t *command_handling(char *arg[]);

/*===========================ERROR HANDLING==================================*/

/*
 * @brief handle the arguments error, given at the first program execution
 *
 * @param argc
 * @param argv
 * @return int
 */
int arg_handling(int argc, char *const argv[]);

/*
 * @brief handle the environment variable error, used by the program
 *
 * @param env
 * @return int
 */
int env_handling(char *const env[]);

/*
 * @brief Handling errors based on exit codes to detect failure in a command
 *
 * @param status
 * @return int
 */
int error_signal(int status);

/*===========================PATH HANDLING===================================*/

char *parse_path(char *path, char *arg);
char *find_path(char *const env[], char *path);
char *search_new_path(char *new_path, char *arg);

/*
 * @brief return the executable file, with that exact name in the list of
    directories kept in the environment variable
 *
 * @param env
 * @param path
 * @param arg
 * @return char*
 */
char *return_path(char *const env[], char *path, char *arg[]);

/*===========================SHELL BUILTIN===================================*/

int builtin_cd(char *arg[], env_t *list);
int builtin_env(char *arg[], env_t *list);
int builtin_exit(char *arg[], env_t *list);
int builtin_setenv(char *arg[], env_t *list);
int builtin_unsetenv(char *arg[], env_t *list);

/*===============================UTILS=======================================*/

void error_message(char const *str);

#endif
