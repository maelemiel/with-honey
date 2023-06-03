/*
**  PROJECT, 2022
** str
** File description:
** str
*/

#include "lib.h"

int wordlength(int i, char const *str)
{
    int length = 0;

    while (str[i] != '\0') {
        length++;
        if (str[i] == ' ' || str[i] == '\n' ||
        str[i] == '\t' || str[i] == ':') {
            break;
        }
        i++;
    }
    return length;
}

int count(char const *str)
{
    int nb_word = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\t' ||
        str[i] == '\n' || str[i] == ':') {
            nb_word++;
        }
    }
    nb_word++;
    return nb_word;
}

int work(char const *str, int nb_word, char** wa)
{
    int sizeword = 0;
    int count_size = 0;

    for (int i = 0; i != nb_word; i++) {
        sizeword = wordlength(count_size, str);
        wa[i] = malloc(sizeof(char) * (sizeword + 1));
        count_size = count_size + sizeword;
    }
}

char **my_str_to_word_array(char const *str)
{
    int nb_word = count(str);
    char **wa = malloc(nb_word * sizeof(char*) + 1);
    int k = 0;
    int l = 0;

    work(str, nb_word, wa);

    for (int j = 0; str[j] != '\0'; j++,k++) {
        if (str[j] == ' ' || str[j] == '\t' ||
        str[j] == '\n' || str[j] == ':') {
            wa[l][k] = '\0';
            l++;
            k = -1;
            continue;
        }
        wa[l][k] = str[j];
    }
    wa[nb_word] = NULL;
    return wa;
}
