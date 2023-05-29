##
## EPITECH PROJECT, 2023
## honey
## File description:
## Makefile
##

SRC	=	src/honey.c							\
		src/take_number_of_honey.c 			\
		src/main.c 							\

OBJ	=	$(SRC:.c=.o)

NAME	=	honey

CFLAGS	=	-g -I./includes

$(NAME)	:	$(OBJ)
	@gcc $(OBJ) $(CFLAGS) $(CSFML) -o $(NAME)


all:	$(NAME)

clean:
		@rm -f $(OBJ)

fclean:	clean
		@rm -f $(NAME)

re:	fclean all
		@rm -f $(OBJ)
