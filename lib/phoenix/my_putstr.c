/*
**  PROJECT, 2022
** my_putstr
** File description:
** freed
*/

#include "lib.h"

int my_putstr(char const *str)
{
    return (write(1, str, my_strlen(str)));
}
