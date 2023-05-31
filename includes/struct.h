/*
** PROJECT, 2023
** honey
** File description:
** struct
*/

#pragma once

typedef struct parser {
    struct Recipe *recipe;

} parser_t;

struct Recipe {
    char **name;
    char **ingredients;
    char **preparation;
    char **cooking;
    char **rest;
    char **nb;
    char **unit;
    char **time;
    char **difficulty;
    char **price;
    char **type;
};
