/*
**  PROJECT, 2022
** isprime
** File description:
** oui
*/

#include "lib.h"

int is_prime_number(int nb)
{
    if (nb <= 1) {
        return 0;
    }
    for (int i = 2; i <= my_sqrt(nb); i++) {
        if (nb % i == 0) {
            return 0;
        }
    }
    return 1;
}
