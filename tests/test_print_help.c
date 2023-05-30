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
    cr_assert_stdout_eq_str("USAGE\n\t./honey number of grams of honey \n\n"
    "DESCRIPTION\n\tonce done, recipes will be proposed to you\n\n");
}

