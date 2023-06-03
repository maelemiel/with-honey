/*
**  PROJECT, 2023
** Tests_Criterion-master
** File description:
** test_my_strcat
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "lib.h"

Test(my_strcat, test_my_strcat0)
{
    char *str1 = "Hello";
    char *str2 = " World!";
    char *str3 = "Hello World!";
    cr_assert_str_eq(my_strcat(str1, str2), str3);
}

Test(my_strcat, test_my_strcat1)
{
    char *str1 = "Hello ";
    char *str2 = " World!";
    char *str3 = "Hello  World!";
    cr_assert_str_eq(my_strcat(str1, str2), str3);
}
