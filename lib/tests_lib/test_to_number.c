/*
**  PROJECT, 2023
** Tests_Criterion-master
** File description:
** test_to_number
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "lib.h"

Test(to_number, test_to_number0)
{
    cr_assert_eq(to_number("0"), 0);
}

Test(to_number, test_to_number1)
{
    cr_assert_eq(to_number("1"), 1);
}

Test(to_number, test_to_number2)
{
    cr_assert_eq(to_number("2"), 2);
}

Test(to_number, test_to_number4)
{
    cr_assert_eq(to_number("-2147483647"), -2147483647);
}

Test(to_number, test_to_number5)
{
    cr_assert_eq(to_number("2147483647"), 2147483647);
}

Test(to_number, test_to_number6)
{
    cr_assert_eq(to_number("2147483648"), 0);
}

Test(to_number, test_to_number7)
{
    cr_assert_eq(to_number("784a8484"), 784);
}

Test(to_number, test_to_number8)
{
    cr_assert_eq(to_number("a"), 0);
}

Test(to_number, test_to_number9)
{
    cr_assert_eq(to_number("a1"), 0);
}

Test(to_number, test_to_number10)
{
    cr_assert_eq(to_number("1a"), 1);
}

Test(to_number, test_to_number11)
{
    cr_assert_eq(to_number("1a1"), 1);
}

Test(to_number, test_to_number12)
{
    cr_assert_eq(to_number("4-5-65-5-a87"), 45655);
}

Test(to_number, test_to_number13)
{
    cr_assert_eq(to_number("4-565-5-a87"), -45655);
}
