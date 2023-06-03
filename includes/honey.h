/*
** PROJECT, 2023
** honey
** File description:
** honey
*/

#pragma once

#include "struct.h"

int main(int ac, char** av);
int print_help(char** av);
int check_file_in_the_folder(char *path_folder, parser_t *parser);
char* verif_number_of_honey(char *nb);
int manage_number_of_honey(char *nb);
int transform_nb(char *nb);
int verif_args(int ac);
char* verif_units(char* av);
int manage_args(int ac, char** av, parser_t *parser);
int print_honey(char **av);
int parse_file(char *file, char *path_folder, parser_t *parser);
int parse_string(char *buffer);