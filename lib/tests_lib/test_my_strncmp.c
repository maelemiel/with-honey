/*
**  PROJECT, 2023
** Tests_Criterion-master
** File description:
** test_my_strncmp
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "lib.h"

Test(my_strncmp, test_my_strncmp0)
{
    cr_assert_eq(my_strncmp("Hello World!", "Hello World!", 12), 0);
}

Test(my_strncmp, test_my_strncmp1)
{
    cr_assert_eq(my_strncmp("Hello World!", "Hello hello!", 12), -1);
}

Test(my_strncmp, test_my_strncmp2)
{
    cr_assert_eq(my_strncmp("Hello World!", "Hello hello!", 5), 0);
}

Test(my_strncmp, test_my_strncmp3)
{
    cr_assert_eq(my_strncmp("Hello World!", "Hello hello!", 6), 0);
}

Test(my_strncmp, test_my_strncmp4)
{
    cr_assert_eq(my_strncmp("Hello World!", "Hello hello!", 7), -1);
}
