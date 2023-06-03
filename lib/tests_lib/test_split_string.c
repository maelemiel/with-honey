/*
**  PROJECT, 2023
** Tests_Criterion-master
** File description:
** test_split_string
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "lib.h"

Test(split_string, test_split_string0)
{
    char str[] = "Hello World!";
    char **tab = split_string(str, " ");
    cr_assert_str_eq(tab[0], "Hello");
    cr_assert_str_eq(tab[1], "World!");
    cr_assert_null(tab[2]);
}

Test(split_string, test_split_string1)
{
    char str[] = "Hello World!";
    char **tab = split_string(str, "!");
    cr_assert_str_eq(tab[0], "Hello World");
    cr_assert_null(tab[1]);
}

Test(split_string, test_split_string2)
{
    char str[] = "Hello World!";
    char **tab = split_string(str, "l");
    cr_assert_str_eq(tab[0], "He");
    cr_assert_str_eq(tab[1], "o Wor");
    cr_assert_str_eq(tab[2], "d!");
    cr_assert_null(tab[3]);
}
