/*
**  PROJECT, 2023
** Tests_Criterion-master
** File description:
** test_my_isupper
*/


#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "lib.h"

Test(my_isupper, test_my_isupper0)
{
    cr_assert_eq(my_isupper(0), 0);
}

Test(my_isupper, test_my_isupper1)
{
    cr_assert_eq(my_isupper(1), 0);
}

Test(my_isupper, test_my_isuppera)
{
    cr_assert_eq(my_isupper('a'), 0);
}

Test(my_isupper, test_my_isupperb)
{
    cr_assert_eq(my_isupper('b'), 0);
}

Test(my_isupper, test_my_isupperA)
{
    cr_assert_eq(my_isupper('A'), 1);
}

Test(my_isupper, test_my_isupperB)
{
    cr_assert_eq(my_isupper('B'), 1);
}
