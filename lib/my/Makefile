##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile for LIB
##

SRC_PRINTF	=	printf/my_printf.c				\
				printf/my_printf_decimal.c		\
				printf/my_put_nbrbase.c

SRC_UTIL	=	utils/my_skip_space.c			\
				utils/my_free_array.c			\
				utils/my_read_file.c			\
				utils/error_message.c			\
				utils/my_open_file.c			\
				utils/my_memset.c

SRC_STRING	=	string/my_putchar.c				\
				string/my_putstr.c				\
				string/my_strlen.c				\
				string/my_strcpy.c				\
				string/my_strncpy.c				\
				string/my_strcmp.c				\
				string/my_strncmp.c				\
				string/my_strupcase.c			\
				string/my_strlowcase.c			\
				string/my_strcapitalize.c		\
				string/my_str_isalpha.c			\
				string/my_str_isnum.c			\
				string/my_str_islower.c			\
				string/my_str_isupper.c			\
				string/my_str_isprintable.c		\
				string/my_strcat.c				\
				string/my_strncat.c				\
				string/my_print_octal.c			\
				string/my_strdup.c

SRC_INTEGER	=	integer/my_isneg.c				\
				integer/my_put_nbr.c			\
				integer/my_sort_int_array.c		\
				integer/my_getnbr.c				\
				integer/my_compute_power_rec.c	\
				integer/my_is_prime.c			\
				integer/my_find_prime_sup.c

SRC_PARSING	=	parsing/my_str_to_word_array.c	\

SRC			=	$(SRC_PRINTF)					\
				$(SRC_UTIL)						\
				$(SRC_STRING)					\
				$(SRC_INTEGER)					\
				$(SRC_PARSING)

OBJ			=	$(SRC:.c=.o)

NAME		=	libmy.a

CFLAGS	=	-Wall -Wextra

all:	$(NAME)

$(NAME):	$(OBJ)
	@ar rc $(NAME) $(OBJ)
	@cp my*.h ../../include
	@mv libmy.a ../

clean :
	@rm -f $(OBJ)
	@find -name *.# -delete
	@find -name *.~ -delete
	@find -name *.tmp -delete

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
