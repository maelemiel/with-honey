/*
** PROJECT, 2023
** honey
** File description:
** manage_args
*/

#include <stdio.h>
#include "honey.h"

int manage_args(int ac, char** av)
{
    verif_args(ac);
    print_help(av);
    printf("nb : %d %s\n", manage_number_of_honey(av[1]), verif_units(av[2]));
    fflush(stdout);
    check_file_in_the_folder("./recipes");
    return 0;
}
