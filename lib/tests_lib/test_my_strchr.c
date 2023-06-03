/*
**  PROJECT, 2023
** Tests_Criterion-master
** File description:
** test_my_strchr
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "lib.h"

Test(my_strchr, test_my_strchr0)
{
    char str[] = "Hello World!";
    cr_assert_str_eq(my_strchr(str, 'H'), "Hello World!");
}

Test(my_strchr, test_my_strchr1)
{
    char str[] = "Hello World!";
    cr_assert_str_eq(my_strchr(str, 'o'), "o World!");
}

Test(my_strchr, test_my_strchr2)
{
    char str[] = "Hello World!";
    cr_assert_str_eq(my_strchr(str, 'l'), "llo World!");
}
