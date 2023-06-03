/*
**  PROJECT, 2023
** Tests_Criterion-master
** File description:
** test_my_digits
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "lib.h"

Test(my_digits, test_my_digits0)
{
    cr_assert_eq(my_digits(0), 1);
}

Test(my_digits, test_my_digits1)
{
    cr_assert_eq(my_digits(1), 1);
}

Test(my_digits, test_my_digits10)
{
    cr_assert_eq(my_digits(10), 2);
}

Test(my_digits, test_my_digits100)
{
    cr_assert_eq(my_digits(100), 3);
}

Test(my_digits, test_my_digits1000)
{
    cr_assert_eq(my_digits(1000), 4);
}

Test(my_digits, test_my_digits_negative1)
{
    cr_assert_eq(my_digits(-1), 1);
}

Test(my_digits, test_my_digits_negative10)
{
    cr_assert_eq(my_digits(-10), 2);
}

Test(my_digits, test_my_digits_negative100)
{
    cr_assert_eq(my_digits(-100), 3);
}

Test(my_digits, test_my_digits_big)
{
    cr_assert_eq(my_digits(2147483647), 10);
}

Test(my_digits, test_my_digits_big_negative)
{
    cr_assert_eq(my_digits(-2147483647), 10);
}

Test(my_digits, test_my_digits_big_negative2)
{
    cr_assert_eq(my_digits(-2147483648), 10);
}
