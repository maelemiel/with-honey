/*
**  PROJECT, 2023
** Tests_Criterion-master
** File description:
** test_my_sqrt
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "lib.h"

Test(my_sqrt, test_my_sqrt0)
{
    cr_assert_eq(my_sqrt(0), 0);
}
