/*
**  PROJECT, 2023
** oui
** File description:
** oii
*/

#include "lib.h"

int	my_strcmp(const char *s1, const char *s2)
{
    int	i = 0;

    if (my_strlen(s1) != my_strlen(s2)) {
        return 1;
    }
    while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0')) {
        i++;
    }
    if (s1[i] != s2[i]) {
        return 1;
    }
    return 0;
}
