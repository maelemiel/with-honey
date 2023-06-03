/*
**  PROJECT, 2022
** oui
** File description:
** stisti
*/

#include "lib.h"

int show_number(int nb)
{
    if (nb < -2147483648 || nb > 2147483647)
        return 0;
    if (nb < 0) {
        if (nb == -2147483648) {
            my_putchar('-'); my_putchar('2');
            nb = -147483648;
            nb = nb * -1;
        } else {
            my_putchar('-');
            nb = nb * -1;
        }
    }
    if (nb >= 10) {
        show_number(nb / 10); show_number(nb % 10);
        return 0;
    } else {
        my_putchar(nb + 48);
        return 0;
    }
}
