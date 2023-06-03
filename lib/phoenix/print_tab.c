/*
**  PROJECT, 2023
** tab
** File description:
** tab
*/

#include "lib.h"

void print_tab(char** tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
}
