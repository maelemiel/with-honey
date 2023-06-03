/*
**  PROJECT, 2023
** lib
** File description:
** my_count_words
*/

#include "lib.h"

int my_count_words(const char *str, const char * delim)
{
    int count = 0;
    int len = my_strlen(str);
    int i = 0;
    while (i < len) {
        while (i < len && my_strchr(delim, str[i]) != NULL) {
            i++;
        }
        if (i == len) {
            break;
        }
        count++;
        while (i < len && my_strchr(delim, str[i]) == NULL) {
            i++;
        }
    }
    return count;
}
