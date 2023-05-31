/*
** PROJECT, 2023
** honey
** File description:
** honey
*/

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdio.h>
#include <dirent.h>
#include "honey.h"

int check_file_in_the_folder(char *path_folder)
{
    int nb = 0;
    struct dirent *dir;
    DIR *d = opendir(path_folder);
        while ((dir = readdir(d)) != NULL) {
            if (dir->d_name[0] != '.') {
                printf("%s\n", dir->d_name);
                nb++;
            }
        }
        closedir(d);
    printf("nb : %d\n", nb);
    return 0;
}
