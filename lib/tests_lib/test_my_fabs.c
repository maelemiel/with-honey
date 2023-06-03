/*
**  PROJECT, 2023
** Tests_Criterion-master
** File description:
** test_my_fabs
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "lib.h"

Test(my_fabs, test_my_fabs0)
{
    cr_assert_eq(my_fabs(0), 0);
}

Test(my_fabs, test_my_fabs1)
{
    cr_assert_eq(my_fabs(1), 1);
}

Test(my_fabs, test_my_fabs10)
{
    cr_assert_eq(my_fabs(10), 10);
}

Test(my_fabs, test_my_fabs100)
{
    cr_assert_eq(my_fabs(100), 100);
}

Test(my_fabs, test_my_fabs1000)
{
    cr_assert_eq(my_fabs(1000), 1000);
}

Test(my_fabs, test_my_fabs_negative1)
{
    cr_assert_eq(my_fabs(-1), 1);
}

Test(my_fabs, test_my_fabs_negative10)
{
    cr_assert_eq(my_fabs(-10), 10);
}

Test(my_fabs, test_my_fabs_negative100)
{
    cr_assert_eq(my_fabs(-100), 100);
}

Test(my_fabs, test_my_fabs_big)
{
    cr_assert_eq(my_fabs(2147483647), 2147483647);
}

Test(my_fabs, test_my_fabs_big_negative)
{
    cr_assert_eq(my_fabs(-2147483647), 2147483647);
}