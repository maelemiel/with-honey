/*
**  PROJECT, 2023
** Tests_Criterion-master
** File description:
** test_my_putchar
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "lib.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_putchar, test_my_putchar, .init = redirect_all_std)
{
    my_putchar('\n');
    cr_assert_stdout_eq_str("\n");
}

Test(my_putchar, test_my_putchara, .init = redirect_all_std)
{
    my_putchar('a');
    cr_assert_stdout_eq_str("a");
}

Test(my_putchar, test_my_putcharb, .init = redirect_all_std)
{
    my_putchar('b');
    cr_assert_stdout_eq_str("b");
}

Test(my_putchar, test_my_putchar0, .init = redirect_all_std)
{
    my_putchar('0');
    cr_assert_stdout_eq_str("0");
}