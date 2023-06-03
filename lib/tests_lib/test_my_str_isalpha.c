/*
**  PROJECT, 2023
** Tests_Criterion-master
** File description:
** test_my_str_isalpha
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "lib.h"

Test(my_str_isalpha, test_my_str_isalpha0)
{
    char str[] = "Hello World!";
    cr_assert_eq(my_str_isalpha(str), 0);
}

Test(my_str_isalpha, test_my_str_isalpha1)
{
    char str[] = "HelloWorld!";
    cr_assert_eq(my_str_isalpha(str), 0);
}

Test(my_str_isalpha, test_my_str_isalpha2)
{
    char str[] = "Hello  \t \n World";
    cr_assert_eq(my_str_isalpha(str), 0);
}
