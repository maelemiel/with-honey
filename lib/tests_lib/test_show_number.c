/*
**  PROJECT, 2023
** Tests_Criterion-master
** File description:
** test_show_number
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "lib.h"

Test(show_number, test_show_number0)
{
    cr_redirect_stdout();
    show_number(0);
    cr_assert_stdout_eq_str("0");
}

Test(show_number, test_show_number1)
{
    cr_redirect_stdout();
    show_number(1);
    cr_assert_stdout_eq_str("1");
}

Test(show_number, test_show_number2)
{
    cr_redirect_stdout();
    show_number(2);
    cr_assert_stdout_eq_str("2");
}

Test(show_number, test_show_number4)
{
    cr_redirect_stdout();
    show_number(-2147483647);
    cr_assert_stdout_eq_str("-2147483647");
}

Test(show_number, test_show_number5)
{
    cr_redirect_stdout();
    show_number(2147483647);
    cr_assert_stdout_eq_str("2147483647");
}
