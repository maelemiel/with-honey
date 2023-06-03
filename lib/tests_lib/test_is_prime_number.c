/*
**  PROJECT, 2023
** Tests_Criterion-master
** File description:
** test_is_prime_number
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "lib.h"

Test(is_prime_number, test_is_prime_number0)
{
    cr_assert_eq(is_prime_number(0), 0);
}

Test(is_prime_number, test_is_prime_number1)
{
    cr_assert_eq(is_prime_number(1), 0);
}

Test(is_prime_number, test_is_prime_number2)
{
    cr_assert_eq(is_prime_number(2), 1);
}

Test(is_prime_number, test_is_prime_number3)
{
    cr_assert_eq(is_prime_number(3), 1);
}

Test(is_prime_number, test_is_prime_number4)
{
    cr_assert_eq(is_prime_number(4), 0);
}

Test(is_prime_number, test_is_prime_number5)
{
    cr_assert_eq(is_prime_number(5), 1);
}

Test(is_prime_number, test_is_prime_number6)
{
    cr_assert_eq(is_prime_number(6), 0);
}

Test(is_prime_number, test_is_prime_number7)
{
    cr_assert_eq(is_prime_number(7), 1);
}

Test(is_prime_number, test_is_prime_number8)
{
    cr_assert_eq(is_prime_number(8), 0);
}

Test(is_prime_number, test_is_prime_number9)
{
    cr_assert_eq(is_prime_number(9), 0);
}

Test(is_prime_number, test_is_prime_number10)
{
    cr_assert_eq(is_prime_number(10), 0);
}

Test(is_prime_number, test_is_prime_number11)
{
    cr_assert_eq(is_prime_number(11), 1);
}

Test(is_prime_number, test_is_prime_number12)
{
    cr_assert_eq(is_prime_number(12), 0);
}

Test(is_prime_number, test_is_prime_number13)
{
    cr_assert_eq(is_prime_number(13), 1);
}

Test(is_prime_number, test_is_prime_number14)
{
    cr_assert_eq(is_prime_number(14), 0);
}

Test(is_prime_number, test_is_prime_number15)
{
    cr_assert_eq(is_prime_number(15), 0);
}

Test(is_prime_number, test_is_prime_number_negative)
{
    cr_assert_eq(is_prime_number(-1), 0);
}

Test(is_prime_number, test_is_prime_number_big)
{
    cr_assert_eq(is_prime_number(2147483647), 1);
}

Test(is_prime_number, test_is_prime_number_big_negative)
{
    cr_assert_eq(is_prime_number(-2147483648), 0);
}
