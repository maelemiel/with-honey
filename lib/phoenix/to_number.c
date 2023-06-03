/*
**  PROJECT, 2022
** fgvbhnj
** File description:
** fv
*/

#include "lib.h"

int verif(char const* str)
{
    int count = 0;

    for (int a = 0; 1 != my_isalpha(str[a]); a++) {
        if (str[a] == '-') {
                count++;
            }
        }
    if (count % 2 != 0) {
        return -1;
    }
    if (count % 2 == 0) {
        return 1;
    }
    return 0;
}

int to_number(char const* str)
{
    long nb = 0;
    int a = 0;

    for (int i = 0; 1 != my_isalpha(str[i]); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            a++;
            nb *= 10;
            nb += str[i] - '0';
        }
    }
    if (a > 10) {
        return 0;
    }
    nb *= verif(str);
    if (nb >= -2147483648 && nb <= 2147483647) {
        return (int)nb;
    } else {
        return 0;
    }
}
