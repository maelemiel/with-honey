/*
**  PROJECT, 2023
** strdup
** File description:
** strdup
*/

#include "lib.h"

char *my_strdup(const char *s)
{
    char *str;
    int i = 0;
    int len = my_strlen(s);

    str = malloc(sizeof(char) * (len + 1));
    if (str == NULL)
        return NULL;
    while (s[i] != '\0') {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
    return str;
}
