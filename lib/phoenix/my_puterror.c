/*
**  PROJECT, 2023
** puterror
** File description:
** error
*/

#include "lib.h"

int my_puterror(char const * str)
{
    write(STDERR_FILENO, str, my_strlen(str));
    return 0;
}
