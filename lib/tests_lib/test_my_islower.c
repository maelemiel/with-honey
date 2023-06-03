/*
**  PROJECT, 2023
** Tests_Criterion-master
** File description:
** test_my_islower
*/


#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "lib.h"

Test(my_islower, test_my_islower0)
{
    cr_assert_eq(my_islower(0), 0);
}

Test(my_islower, test_my_islower1)
{
    cr_assert_eq(my_islower(1), 0);
}

Test(my_islower, test_my_islowera)
{
    cr_assert_eq(my_islower('a'), 1);
}

Test(my_islower, test_my_islowerb)
{
    cr_assert_eq(my_islower('b'), 1);
}

Test(my_islower, test_my_islowerA)
{
    cr_assert_eq(my_islower('A'), 0);
}
