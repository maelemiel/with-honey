/*
**  PROJECT, 2023
** Tests_Criterion-master
** File description:
** test_my_strlen
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "lib.h"

Test(my_strlen, test_my_strlen0)
{
    cr_assert_eq(my_strlen("Hello World!"), 12);
}

Test(my_strlen, test_my_strlen1)
{
    cr_assert_eq(my_strlen("Hello World!\n"), 13);
}
