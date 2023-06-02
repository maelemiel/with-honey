/*
** PROJECT, 2023
** honey
** File description:
** count_ingredient
*/

#include <string.h>
#include "honey.h"
#include "struct.h"

int count_ingredient(char **tab)
{
    int i = 0;
    int count = 0;

    while (tab[i] != NULL) {
        if (strcmp(tab[i], "Ingredient") == 0)
            count++;
        i++;
    }
    return count;
}
