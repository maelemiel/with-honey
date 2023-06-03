/*
**  PROJECT, 2023
** Tests_Criterion-master
** File description:
** test_my_isalpha
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "lib.h"

Test(my_isalpha, test_my_isalpha0)
{
    cr_assert_eq(my_isalpha(0), 0);
}

Test(my_isalpha, test_my_isalpha1)
{
    cr_assert_eq(my_isalpha(1), 0);
}

Test(my_isalpha, test_my_isalphaa)
{
    cr_assert_eq(my_isalpha('a'), 1);
}

Test(my_isalpha, test_my_isalphab)
{
    cr_assert_eq(my_isalpha('b'), 1);
}
