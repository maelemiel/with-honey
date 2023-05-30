/*
** PROJECT, 2023
** honey
** File description:
** test_main
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "honey.h"

Test(honey, test_honey)
{
    char *av[] = {"./honey", "tests/test_main.c", NULL};

    cr_assert_eq(honey(av[1]), 0);
}
