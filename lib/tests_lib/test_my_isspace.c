/*
**  PROJECT, 2023
** Tests_Criterion-master
** File description:
** test_my_isspace
*/


#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "lib.h"

Test(my_isspace, test_my_isspace0)
{
    cr_assert_eq(my_isspace(0), 0);
}

Test(my_isspace, test_my_isspace1)
{
    cr_assert_eq(my_isspace(1), 0);
}

Test(my_isspace, test_my_isspacetab)
{
    cr_assert_eq(my_isspace('\t'), 1);
}

Test(my_isspace, test_my_isspacenewline)
{
    cr_assert_eq(my_isspace('\n'), 1);
}

Test(my_isspace, test_my_isspacevtab)
{
    cr_assert_eq(my_isspace('\v'), 1);
}

Test(my_isspace, test_my_isspacenbsp)
{
    cr_assert_eq(my_isspace(' '), 1);
}

Test(my_isspace, test_my_isspacenull)
{
    cr_assert_eq(my_isspace('\0'), 0);
}
