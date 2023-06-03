/*
**  PROJECT, 2023
** Tests_Criterion-master
** File description:
** test_my_putstr
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "lib.h"

Test(my_putstr, test_my_putstr0)
{
    cr_redirect_stdout();
    my_putstr("Hello World!");
    cr_assert_stdout_eq_str("Hello World!");
}

Test(my_putstr, test_my_putstr1)
{
    cr_redirect_stdout();
    my_putstr("Hello World!\n");
    cr_assert_stdout_eq_str("Hello World!\n");
}
