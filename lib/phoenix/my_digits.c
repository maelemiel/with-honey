/*
**  PROJECT, 2022
** heg
** File description:
** rev
*/

int my_digits(int c)
{
    int i = 0;
    if (c == 0)
        return 1;
    while (c != 0) {
        c = c / 10;
        i++;
    }
    return i;
}
