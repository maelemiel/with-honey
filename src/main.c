/*
** PROJECT, 2023
** honey
** File description:
** main
*/

#include <stdio.h>
#include <stdlib.h>
#include "honey.h"
#include "struct.h"

static void init_struct(parser_t *parser)
{
    parser->recipe = malloc(sizeof(struct Recipe));
    parser->ingredient = malloc(sizeof(struct Ingredient));
    parser->nb_of_file = 0;
    parser->recipe->name = NULL;
    parser->recipe->type = NULL;
    parser->recipe->difficulty = NULL;
    parser->recipe->nb_people = NULL;
    parser->recipe->total_time = NULL;
    parser->recipe->cooking_time = NULL;
    parser->recipe->prep_time = NULL;
    parser->recipe->price = NULL;
    parser->recipe->ingredients = NULL;
    parser->ingredient->name = NULL;
    parser->ingredient->quantity = NULL;
    parser->ingredient->unit = NULL;
    parser->ingredient->nb = NULL;
    parser->ingredient->nb_ingredient = 0;
}

int main(int ac, char** av)
{
    parser_t *parser = malloc(sizeof(parser_t));
    init_struct(parser);
    manage_args(ac, av, parser);
    return 0;
}
