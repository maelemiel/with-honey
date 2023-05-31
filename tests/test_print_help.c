/*
** PROJECT, 2023
** honey
** File description:
** test_print_help
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "honey.h"

Test(honey_help, test_honey_print)
{
    char *av[] = {"./honey", "-h", NULL};

    cr_redirect_stdout();
    cr_assert_eq(print_help(av), 0);
    cr_assert_stdout_eq_str("USAGE\n\t./honey [number] [unit]\n\nDESCRIPTION\n\t"
    "number\t\ta number of units\n\tunit\t\ta unit among g, kg, l, cl, ml\n\n"
    "EXAMPLE\n\t./honey 42 kg\n");
}

