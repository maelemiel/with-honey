/*
**  PROJECT, 2023
** lib
** File description:
** lib
*/

#ifndef LIB_H_
    #define LIB_H_

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int is_prime_number(int nb);
int my_count_words(const char *str, const char * delim);
int my_digits(int c);
double my_fabs(double x);
int my_isalpha(char c);
int my_islower(char c);
int my_isspace(char c);
int my_isupper(char c);
void my_putchar(char c);
int my_puterror(char const * str);
int my_putstr(char const *str);
double my_sqrt(double x);
int my_str_isalpha(char const *str);
char **my_str_to_word_array(char const *str);
char* my_strcat(char* s1, const char* s2);
const char *my_strchr(const char *str, int c);
int	my_strcmp(const char *s1, const char *s2);
char* my_strcpy(char* dest, char const* src);
char *my_strdup(const char *s);
int my_strlen(char const *str);
int my_strncmp(char const* s1, char const* s2, int n);
char *my_strstr(char *str, char const *to_find);
char* my_strupcase(char* str);
int my_toupper(int c);
int my_word(char const *str);
void print_tab(char** tab);
char *reverse_string(char* str);
int show_number(int nb);
char **split_string(const char *str, const char* delim);
int to_number(char const* str);

#endif /* !LIB_H_ */
