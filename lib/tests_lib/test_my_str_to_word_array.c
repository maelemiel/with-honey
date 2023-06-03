/*
**  PROJECT, 2023
** Tests_Criterion-master
** File description:
** test_my_str_to_word_array
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "lib.h"

Test(my_str_to_word_array, test_my_str_to_word_array0)
{
    char *str = "Hello World!";
    char **array = my_str_to_word_array(str);
    cr_assert_str_eq(array[0], "Hello");
    cr_assert_str_eq(array[1], "World!");
    cr_assert_eq(array[2], NULL);
}
