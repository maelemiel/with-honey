/*
**  PROJECT, 2023
** Tests_Criterion-master
** File description:
** test_my_strdup
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "lib.h"

Test(my_strdup, test_my_strdup0)
{
    cr_assert_str_eq(my_strdup("Hello World!"), "Hello World!");
}

Test(my_strdup, test_my_strdup1)
{
    cr_assert_str_eq(my_strdup("Hello World!\n"), "Hello World!\n");
}
