/*
** PROJECT, 2023
** honey
** File description:
** main
*/

#include <stdio.h>
#include <stdlib.h>
#include "honey.h"

int main(int ac, char** av)
{
    if (ac != 2)
        return 0;
    print_help(av);
    printf("nb : %d\n", manage_number_of_honey(av[1]));
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
