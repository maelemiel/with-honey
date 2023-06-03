/*
**  PROJECT, 2022
** strup
** File description:
** case
*/

#include "lib.h"

char* my_strupcase(char* str)
{
    int i = 0;
    while (str[i]) {
        if (my_islower(str[i])) {
            str[i] = my_toupper(str[i]);
        }
        i++;
    }
    return str;
}
