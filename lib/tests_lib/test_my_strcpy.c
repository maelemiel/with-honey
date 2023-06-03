/*
**  PROJECT, 2023
** Tests_Criterion-master
** File description:
** test_my_strcpy
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "lib.h"

Test(my_strcpy, test_my_strcpy0)
{
    char *str = "Hello World!";
    char *dest = malloc(sizeof(char) * 12);

    cr_assert_str_eq(my_strcpy(dest, str), "Hello World!");
}
