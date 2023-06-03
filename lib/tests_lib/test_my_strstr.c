/*
**  PROJECT, 2023
** Tests_Criterion-master
** File description:
** test_my_strstr
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "lib.h"

Test(my_strstr, test_my_strstr0)
{
    cr_assert_str_eq(my_strstr("Hello World!", "Hello"), "Hello World!");
}

Test(my_strstr, test_my_strstr1)
{
    cr_assert_str_eq(my_strstr("Hello World!", "World"), "World!");
}

Test(my_strstr, test_my_strstr2)
{
    cr_assert_str_eq(my_strstr("Hello World!", "ld!"), "ld!");
}

Test(my_strstr, test_my_strstr3)
{
    cr_assert_str_eq(my_strstr("Hello World!", "Hello World!"), "Hello World!");
}

Test(my_strstr, test_my_strstr4)
{
    cr_assert_str_eq(my_strstr("Hello World!", "lo Wor"), "lo World!");
}
