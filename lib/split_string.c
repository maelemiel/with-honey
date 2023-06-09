/*
**  PROJECT, 2023
** test
** File description:
** test
*/

#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "honey.h"

char **split_string(const char *str, const char* delim)
{
    int i = 0;
    int num_word = my_count_words(str, delim);
    char **word_array = malloc(sizeof(char *) * (num_word + 1));
    char *copy = strdup(str);
    char *token = strtok(copy, delim);
    for (int i = 0; i <= num_word; i++)
        word_array[i] = NULL;
    while (token != NULL) {
        word_array[i] = (char *) malloc(sizeof(char)
        * (strlen(token) + 1) + 1);
        strcpy(word_array[i], token);
        token = strtok(NULL, delim);
        i++;
    }
    word_array[i] = NULL;
    free(copy);
    return word_array;
}
