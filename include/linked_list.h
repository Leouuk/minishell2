/*
** EPITECH PROJECT, 2022
** minishell2
** File description:
** list
*/

#ifndef LIST_H_
    #define LIST_H_

    #include "struct.h"

/*===========================ENV LINKED LIST=================================*/

/*
* @brief create a list object containing the env
*
* @param env_variable
* @return env_t*
*/
env_t *create_env_list(env_t *env_variable);

/*
* @brief
*
* @param env_variable
* @param ptr
* @return env_t*
*/
env_t *add_node_last(env_t *list, char *const new_env_variable);

/*=======================REDIRECTIONS LINKED LIST============================*/
//redirec_t *add_node_last(redirec_t *list, char *const new_env_variable);
//redirec_t *create_redirection_list(redirec_t *list);

/*
 * @brief free the node values in the linked list
 *
 * @param env_variable
 */
void free_list(env_t *env_variable);

#endif
