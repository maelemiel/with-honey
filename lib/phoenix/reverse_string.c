/*
**  PROJECT, 2022
** oui
** File description:
** bafyeyfe
*/

#include "lib.h"

char *reverse_string(char* str)
{
int len = my_strlen(str);
char temp;

    for (int i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    return str;
}
