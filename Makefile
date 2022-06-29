##
## EPITECH PROJECT, 2021
## Makefile for minshell1
## File description:
## Root Makefile project
##

SRC_MAIN		=	main.c

SRC_ERROR		=	error_handling/argument.c			\
					error_handling/environment.c		\
					util/error_message.c				\
					signal_handling/error_signal.c

SRC_LL_ENV		=	linked_list_env_variable/create_env_list.c	\
					linked_list_env_variable/add_node_last.c	\
					linked_list_env_variable/free_list.c

SRC_EXECUTE		=	manage_exec/execute_binary.c

SRC_PATHFINDING	=	manage_path/find_binary.c			\
					manage_path/get_path.c				\
					manage_path/parse_path.c			\
					manage_path/return_path.c

SRC_COMMAND		=	manage_commands/execute_command.c			\
					manage_commands/commands/env.c				\
					manage_commands/commands/cd.c				\
					manage_commands/commands/exit.c				\
					manage_commands/commands/setenv.c			\
					manage_commands/commands/unsetenv.c

SRC_SHELL_INIT	=	shell_init.c

SRC_ALL			=	$(SRC_ERROR)						\
					$(SRC_LL_ENV)						\
					$(SRC_EXECUTE)						\
					$(SRC_PATHFINDING)					\
					$(SRC_COMMAND)						\
					$(SRC_SHELL_INIT)

OBJ				=	$(addprefix src/, $(SRC_ALL:.c=.o))

OBJ_MAIN		=	$(addprefix src/, $(SRC_MAIN:.c=.o))

CFLAGS		=	-Wextra -Wall -W

CPPFLAGS	=	-I./include

LDFLAGS		=	-L./lib

LDLIBS		=	-lmy

LIBMY		=	lib/libmy.a

NAME		=	mysh

$(LIBMY):
	@make -C lib/my

$(NAME):	$(LIBMY) $(OBJ_MAIN) $(OBJ)
	@make -C./lib/my
	@gcc -o $(NAME) $(OBJ_MAIN) $(OBJ) $(LDFLAGS) $(LDLIBS)

all:	$(NAME)

clean:
	$(RM) $(OBJ)
	@find -name *.# -delete
	@find -name *.~ -delete
	@find -name *.tmp -delete
	@find -name "*.o" -delete

fclean:	clean
	@make fclean -C ./lib/my
	$(RM) -f $(NAME)

debug: fclean
debug: CFLAGS += -ggdb3
debug: $(NAME)

re:	fclean all

.PHONY: all clean fclean debug re
