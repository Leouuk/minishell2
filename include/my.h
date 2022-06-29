/*
** EPITECH PROJECT, 2021
** my h
** File description:
** generic lib
*/

#ifndef HEADER_MYH
    #define HEADER_MYH

    #define ERROR 84
    #define SUCCESS 0
    #include <string.h>
    #include <stdarg.h>
/* PRINTF */
typedef struct flags_s {
    char flag;
    void (*flags_function)(const char *, va_list);
} flags_t ;
int my_printf(char const *str, ...);
void decimal_flags(const char *flag, va_list arguments);
void manage_unsigned_int_flags(const char *flag, va_list argument);
void manage_char_flags(const char *flag, va_list argument);
/* UTIL */
void *my_memset(char *str, int value, size_t count);
void free_array(char **array);
void error_message(char const *str);
int skip_space(char const *str, int i);
char *read_file(const char *filepath, int fd);
/* INTEGER */
int my_isneg(int nb);
int my_put_nbr(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
int my_getnbr(char const *str);
int my_put_nbrbase(int nb, char const *str);
int my_compute_power_rec(int nb, int power);
/* STRING */
void my_putchar(char const c);
int my_strlen(char const *str);
int my_putstr(char const *str);
char *my_strdup(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_print_octal(char const *str);
int my_str_isalpha(char const *str);
char *my_strupcase(char const *str);
char *my_strlowcase(char const *str);
char my_open_file(const char *pathname);
char *my_strcapitalize(char const *str);
int my_str_isprintable(char const *str);
char *my_strcat(char *dest, char const *src);
char *my_strcpy(char *dest, char const *src);
void my_sort_int_array(int *array, int size);
int my_strcmp(char *const s1, char *const s2);
int my_strncmp(char *const s1, char *const s2, int n);
char *my_strncat(char *dest, char const *src, int nb);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char const *str, char const *to_find);
/* PARSING */
char **my_str_to_word_array(char **map, char *str);

#endif
