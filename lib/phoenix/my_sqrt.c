/*
**  PROJECT, 2022
** sqrt
** File description:
** oui
*/

#include "lib.h"

double my_sqrt(double x)
{
    double a = x;
    double b = x / 2.0;
    while (my_fabs(a - b) > 0.00001) {
        a = b;
        b = (a + x / a) / 2.0;
    }
    return b;
}
