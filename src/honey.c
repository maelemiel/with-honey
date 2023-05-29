/*
** EPITECH PROJECT, 2023
** honey
** File description:
** honey
*/

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include "honey.h"

int honey(char *file)
{
    struct stat s;
    int fd = 0;
    char *buffer = NULL;

    stat(file, &s);
    buffer = malloc(sizeof(char) * (s.st_size + 1));
    fd = open(file, O_RDONLY);
    read(fd, buffer, s.st_size);
    buffer[s.st_size] = '\0';
}
