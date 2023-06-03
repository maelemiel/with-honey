/*
**  PROJECT, 2023
** Tests_Criterion-master
** File description:
** test_my_strcmp
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "lib.h"

Test(my_strcmp, test_my_strcmp0)
{
    cr_assert_eq(my_strcmp("Hello World!", "Hello World!"), 0);
}

Test(my_strcmp, test_my_strcmp1)
{
    cr_assert_eq(my_strcmp("Hello World!", "Hello Worl!"), 1);
}

Test(my_strcmp, test_my_strcmp2)
{
    cr_assert_eq(my_strcmp("Hello World!", "Hello Worll!"), 1);
}
