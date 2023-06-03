/*
**  PROJECT, 2023
** Tests_Criterion-master
** File description:
** test_my_word
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "lib.h"

Test(my_word, test_my_word0)
{
    cr_assert_eq(my_word("Hello"), 5);
}

Test(my_word, test_my_word1)
{
    cr_assert_eq(my_word("Hello World!"), 5);
}

Test(my_word, test_my_word2)
{
    cr_assert_eq(my_word("Hello World!\n"), 5);
}

Test(my_word, test_my_word3)
{
    cr_assert_eq(my_word("ertyui"), 6);
}
