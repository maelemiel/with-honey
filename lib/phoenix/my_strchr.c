/*
**  PROJECT, 2023
** Tests_Criterion-master
** File description:
** my_str_chr
*/

#include "lib.h"

const char *my_strchr(const char *str, int c)
{
    int	i = 0;

    while (str[i]) {
        if (str[i] == c) {
            return (str + i);
        }
        i++;
    }
    return NULL;
}
