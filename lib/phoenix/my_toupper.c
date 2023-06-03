/*
**  PROJECT, 2022
** toupper
** File description:
** oui
*/

#include "lib.h"

int my_toupper(int c)
{
    if (my_islower(c)) {
        return (c - 32);
    }
    return c;
}
