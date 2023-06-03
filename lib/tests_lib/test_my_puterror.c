/*
**  PROJECT, 2023
** Tests_Criterion-master
** File description:
** test_my_puterror
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "lib.h"

Test(my_puterror, test_my_puterror0)
{
    cr_redirect_stderr();
    my_puterror("Hello World!");
    cr_assert_stderr_eq_str("Hello World!");
}

Test(my_puterror, test_my_puterror1)
{
    cr_redirect_stderr();
    my_puterror("Hello World!\n");
    cr_assert_stderr_eq_str("Hello World!\n");
}
