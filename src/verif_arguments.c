/*
** PROJECT, 2023
** honey
** File description:
** verif_arguments
*/

#include <stdio.h>
#include <stdlib.h>
#include "honey.h"

int verif_args(int ac)
{
    if (ac < 2 || ac > 3) {
        printf("Error : bad number of arguments\n");
        printf("Try './honey -h' for more information.\n");
        exit (0);
    }
    return 0;
}

int print_help(char** av)
{
    if (av[1][0] == '-' && av[1][1] == 'h') {
        printf("USAGE\n\t./honey number of grams of honey \n\nDESCRIPTION\n\t"
        "once done, recipes will be proposed to you\n\n");
        exit (0);
    }
    return 0;
}

char* verif_units(char* av)
{
    if (av == NULL)
        return "g";
    if (av[0] == 'g' && av[1] == '\0')
        return "g";
    if (av[0] == 'k' && av[1] == 'g' && av[2] == '\0')
        return "kg";
    if (av[0] == 'l' && av[1] == '\0')
        return "l";
    if (av[0] == 'c' && av[1] == 'l' && av[2] == '\0')
        return "cl";
    if (av[0] == 'm' && av[1] == 'l' && av[2] == '\0')
        return "ml";
    printf("Error : bad unit\n");
    printf("Try './honey -h' for more information.\n");
    exit (0);
}
