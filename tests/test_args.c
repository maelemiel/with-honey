/*
** PROJECT, 2023
** honey
** File description:
** test_args
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "honey.h"

Test(honey, test_honey)
{
    int ac = 1;

    cr_redirect_stdout();
    cr_assert_eq(verif_args(ac), 0);
    cr_assert_stdout_eq_str("Error : bad number of arguments\n"
    "Try './honey -h' for more information.\n");
}

Test(honey, test_honey_2)
{
    int ac = 3;

    cr_redirect_stdout();
    cr_assert_eq(verif_args(ac), 0);
}

Test(honey, test_honey_3)
{
    int ac = 4;

    cr_redirect_stdout();
    cr_assert_eq(verif_args(ac), 0);
    cr_assert_stdout_eq_str("Error : bad number of arguments\n"
    "Try './honey -h' for more information.\n");
}

