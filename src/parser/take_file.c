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
#include "struct.h"
#include "lib.h"

int check_file_in_the_folder(char *path_folder, parser_t *parser)
{
    int nb = 0;
    struct dirent *dir;
    DIR *d = opendir(path_folder);
        while ((dir = readdir(d)) != NULL) {
            if (dir->d_name[0] != '.') {
                parser->nb_of_file++;
                parse_file(dir->d_name, path_folder, parser);
            }
        }
        closedir(d);
    printf("nb : %d\n", parser->nb_of_file);
    return 0;
}

int parse_file(char *file, char *path_folder, parser_t *parser)
{
    struct stat s;
    int fd = 0;
    char *buffer = NULL;
    int size = 0;
    char *fwd = NULL;

    size = strlen(path_folder);
    size = size + strlen(file);
    fwd = calloc(parser->nb_of_file, sizeof(char) * (size + 1));
    strcat(fwd, path_folder);
    strcat(fwd, "/");
    strcat(fwd, file);
    stat(fwd, &s);
    buffer = malloc(sizeof(char) * (s.st_size + 1));
    fd = open(fwd, O_RDONLY);
    read(fd, buffer, s.st_size);
    buffer[s.st_size] = '\0';
    parse_string(buffer);
    return 0;
}

int parse_string(char *buffer)
{
    char **split_buffer = malloc(sizeof(char *) * 100000);

    split_buffer = split_string(buffer, "\n");
    printf("split buffer 0 : %s\n", split_buffer[0]);
    printf("split buffer 1 : %s\n", split_buffer[1]);

    return 0;
}
