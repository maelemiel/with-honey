/*
**  PROJECT, 2022
** CPOOLDAY08
** File description:
** Write a function that displays the content of an array of words.
*/

#include "lib.h"

int my_word(char const *str)
{
    int word = 0;
    int i = 0;
    while (my_isalpha(str[i]) == 1) {
        word++;
        i++;
    }
    return word;
}
