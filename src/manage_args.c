/*
** PROJECT, 2023
** honey
** File description:
** manage_args
*/

#include <stdio.h>
#include "honey.h"
#include "struct.h"

int manage_args(int ac, char** av, parser_t *parser)
{
    verif_args(ac);
    print_help(av);
    print_honey(av);
    check_file_in_the_folder("./recipes", parser);
    return 0;
}

int print_honey(char **av)
{
    printf("nb : %d %s\n", manage_number_of_honey(av[1]), verif_units(av[2]));
    fflush(stdout);
    return 0;
}
