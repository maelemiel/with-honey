/*
** PROJECT, 2023
** honey
** File description:
** struct
*/

#pragma once

typedef struct parser {
    struct Recipe *recipe;
    struct Ingredient *ingredient;
    struct Steps *steps;
    int *nb_of_file;
} parser_t;

struct Recipe {
    char *name;
    char *type;
    char *difficulty;
    char *nb_people;
    char *total_time;
    char *prep_time;
    char *cooking_time;
    char *price;
    char *ingredients;
};

struct Ingredient {
    char **name;
    char **nb;
    char **unit;
    char **quantity;
    int nb_ingredient;
};

struct Steps {
    char **steps;
    int nb_steps;
};
