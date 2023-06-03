/*
**  PROJECT, 2022
** mystrcat
** File description:
** oui
*/

#include "lib.h"

char* my_strcat(char* s1, const char* s2)
{

    int dest_len = 0;
    int i;
    char *s3 = malloc(sizeof(char) * (my_strlen(s1) + my_strlen(s2) + 1));

    for (i = 0; s1[i] != '\0'; i++) {
        s3[i] = s1[i];
        dest_len++;
    }
    for (int j = 0; s2[j] != '\0'; j++) {
        s3[i] = s2[j];
        i++;
        dest_len++;
    }
    s3[dest_len] = '\0';
    return s3;
}
