/*
**  PROJECT, 2023
** Tests_Criterion-master
** File description:
** test_print_tab
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "lib.h"

Test(print_tab, test_print_tab0)
{
    char *tab[] = {"Hello World!", NULL};
    cr_redirect_stdout();
    print_tab(tab);
    cr_assert_stdout_eq_str("Hello World!\n");
}

Test(print_tab, test_print_tab1)
{
    char *tab[] = {"Hello World!", "Hello World!", NULL};
    cr_redirect_stdout();
    print_tab(tab);
    cr_assert_stdout_eq_str("Hello World!\nHello World!\n");
}
