/*
** PROJECT, 2023
** honey
** File description:
** honey
*/

#include <stdlib.h>
#include <string.h>
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
                parse_file(dir->d_name, path_folder);
                nb++;
            }
        }
        closedir(d);
    printf("nb : %d\n", nb);
    return 0;
}

int parse_file(char *file, char *path_folder)
{
    struct stat s;
    int fd = 0;
    char *buffer = NULL;
    char *fwd = malloc(sizeof(char) * 10000);
    strcat(fwd, path_folder);
    strcat(fwd, "/");
    strcat(fwd, file);

    printf("%s\n", fwd);
    stat(fwd, &s);
    buffer = malloc(sizeof(char) * (s.st_size + 1));
    fd = open(fwd, O_RDONLY);
    read(fd, buffer, s.st_size);
    buffer[s.st_size] = '\0';
    printf("%s\n", "jesuisla");
    printf("%s\n", buffer);
    return 0;
}
