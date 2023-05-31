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

static void inti_struct(parser_t *parser)
{
    parser->recipe = malloc(sizeof(struct Recipe));
    parser->recipe->name = NULL;
    parser->recipe->ingredients = NULL;
    parser->recipe->preparation = NULL;
    parser->recipe->cooking = NULL;
    parser->recipe->rest = NULL;
    parser->recipe->nb = NULL;
    parser->recipe->unit = NULL;
    parser->recipe->time = NULL;
    parser->recipe->difficulty = NULL;
    parser->recipe->price = NULL;
    parser->recipe->type = NULL;
}

int main(int ac, char** av)
{
    parser_t *parser = malloc(sizeof(parser_t));
    inti_struct(parser);
    manage_args(ac, av);
    return 0;
}
