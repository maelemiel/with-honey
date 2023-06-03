/*
**  PROJECT, 2022
** strlen
** File description:
** oui
*/

int my_strlen(char const *str)
{
    int a = 0;

    while (str[a] != '\0') {
        a++;
    }
    return (a);
}
