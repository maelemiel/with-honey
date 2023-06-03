/*
**  PROJECT, 2023
** Tests_Criterion-master
** File description:
** test_my_strupcase
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "lib.h"

Test(my_strupcase, test_my_strupcase0)
{
    char str[] = "Hello World!";
    cr_assert_str_eq(my_strupcase(str), "HELLO WORLD!");
}
