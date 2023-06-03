/*
**  PROJECT, 2023
** Tests_Criterion-master
** File description:
** test_my_toupper
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "lib.h"

Test(my_toupper, test_my_toupper0)
{
    cr_assert_eq(my_toupper('a'), 'A');
}

Test(my_toupper, test_my_toupper1)
{
    cr_assert_eq(my_toupper('b'), 'B');
}

Test(my_toupper, test_my_toupperspace)
{
    cr_assert_eq(my_toupper(' '), ' ');
}

Test(my_toupper, test_my_toupperA)
{
    cr_assert_eq(my_toupper('A'), 'A');
}

Test(my_toupper, test_my_toupperB)
{
    cr_assert_eq(my_toupper('B'), 'B');
}

Test(my_toupper, test_my_toupper9)
{
    cr_assert_eq(my_toupper('9'), '9');
}

Test(my_toupper, test_my_toupperbackslashn)
{
    cr_assert_eq(my_toupper('\n'), '\n');
}
