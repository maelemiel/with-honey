/*
** PROJECT, 2023
** honey
** File description:
** take_number_of_honey
*/

#include <stdlib.h>
#include "honey.h"

char* verif_number_of_honey(char *nb)
{
    int i = 0;

    while (nb[i] != '\0') {
        if (nb[i] < '0' || nb[i] > '9')
            return NULL;
        i++;
    }
    return nb;
}

int manage_number_of_honey(char *nb)
{
    int nb_honey = 0;

    if (verif_number_of_honey(nb) == NULL)
        exit (1);
    nb_honey = transform_nb(nb);
    if (nb_honey < 0)
        exit (1);
    return nb_honey;
}

int transform_nb(char *nb)
{
    int i = 0;
    int nb_honey = 0;

    while (nb[i] != '\0') {
        nb_honey = nb_honey * 10 + (nb[i] - 48);
        i++;
    }
    return nb_honey;
}
