/*
** PROJECT, 2023
** honey
** File description:
** test_manage_args
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "honey.h"

static void redirect()
{
    cr_redirect_stdout();
}

Test(print_honey, test_print_honey, .init=redirect)
{
    char* av[3] = {"./honey", "100", "g"};

    cr_assert_eq(print_honey(av), 0);
    cr_assert_stdout_eq_str("nb : 100 g\n");
}

Test(print_honey, test_print_honey_2, .init=redirect)
{
    char* av[3] = {"./honey", "100", "kg"};

    cr_assert_eq(print_honey(av), 0);
    cr_assert_stdout_eq_str("nb : 100 kg\n");
}

Test(print_honey, test_print_honey_3, .init=redirect)
{
    char* av[3] = {"./honey", "100", "l"};

    cr_assert_eq(print_honey(av), 0);
    cr_assert_stdout_eq_str("nb : 100 l\n");
}

Test(print_honey, test_print_honey_4, .init=redirect)
{
    char* av[3] = {"./honey", "100", "cl"};

    cr_assert_eq(print_honey(av), 0);
    cr_assert_stdout_eq_str("nb : 100 cl\n");
}

Test(print_honey, test_print_honey_5, .init=redirect)
{
    char* av[3] = {"./honey", "100", "ml"};

    cr_assert_eq(print_honey(av), 0);
    cr_assert_stdout_eq_str("nb : 100 ml\n");
}

Test(print_honey, test_print_honey_6, .init=redirect)
{
    char* av[3] = {"./honey", "100", "k"};

    cr_assert_eq(print_honey(av), 0);
    cr_assert_stdout_eq_str("Error : bad unit"
    "Try './honey -h' for more information.\n");
}
