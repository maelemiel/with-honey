/*
**  PROJECT, 2023
** Tests_Criterion-master
** File description:
** test_reverse_string
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "lib.h"

Test(reverse_string, test_reverse_string0)
{
    char str[] = "Hello World!";
    cr_assert_str_eq(reverse_string(str), "!dlroW olleH");
}

Test(reverse_string, test_reverse_string1)
{
    char str[] = "Hello World!\n";
    cr_assert_str_eq(reverse_string(str), "\n!dlroW olleH");
}
