/*
**  PROJECT, 2022
** strncmp
** File description:
** cmp
*/

#include "lib.h"

int my_strncmp(char const* s1, char const* s2, int n)
{
    while (n > 0 && *s1 == *s2) {
        if (s1 == NULL || s2 == NULL) {
            break;
        }
        if (s1[0] == '\0' || s2[0] == '\0') {
            break;
        }
        ++s1;
        ++s2;
        --n;
    }
    if (n == 0) {
        return 0;
    } else if (*s1 < *s2) {
        return -1;
    }
    if (*s2 < *s1) {
        return 1;
    } else
    return 0;
}
