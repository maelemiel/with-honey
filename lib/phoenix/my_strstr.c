/*
**  PROJECT, 2022
** strstr
** File description:
** strstr
*/

#include "lib.h"

char *my_strstr(char *str, char const *to_find)
{
    int find_len = my_strlen(to_find);
    while (*str != '\0') {
        if (my_strncmp(str, to_find, find_len) == 0)
            return (str);
        str++;
    }
    return 0;
}
