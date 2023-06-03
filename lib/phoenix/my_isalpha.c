/*
**  PROJECT, 2022
** isalpha
** File description:
** oui
*/

#include "lib.h"

int my_isalpha(char c)
{
    if (my_islower(c) || my_isupper(c)) {
        return 1;
    } else {
        return 0;
    }
}
