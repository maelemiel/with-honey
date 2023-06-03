##
## PROJECT, 2023
## honey
## File description:
## Makefile
##

MAIN 		=   src/main.c					\

FILES		=	parser/take_file.c      	\
				parser/count_steps.c 		\
				parser/count_ingredient.c 	\
				manage_args.c 				\
				take_number_of_honey.c 		\
				verif_arguments.c			\

TEST_FILES 	=  	test_args.c					\
				test_print_args.c 			\
				test_print_help.c 			\

SRCDIR 		= 	src/
TEST_DIR	=	tests/
SRC 		=	$(addprefix $(SRCDIR), $(FILES))
TEST_SRC	=	$(addprefix $(TEST_DIR), $(TEST_FILES))
MAIN_OBJ 	=	$(MAIN:.c=.o)
OBJ			= 	$(SRC:.c=.o)
OBJLIB		=	$(LIB:.c=.o)
OBJTEST 	= 	$(SRC:%.c=%.o)

L 		=  -L./lib/phoenix/ -lphoenix

NAME		= 	honey

NAMETEST 	= 	unit_tests

CFLAGS	   +=   -g -I./includes -W -Wall -Wextra -I./lib/phoenix
CFLAGS_TEST	=	$(CFLAGS) -lcriterion

$(NAME): 	 $(OBJ) $(MAIN_OBJ)
	make -C lib/phoenix
	@gcc -o $(NAME) $(OBJ) $(MAIN_OBJ) $(CFLAGS) $(L)

all:	$(NAME)

clean:
	@rm -f $(OBJ)
	@rm -f $(MAIN_OBJ)
	make clean -C lib/phoenix

fclean: clean
	@rm -f $(NAME)
	@rm -f $(NAMETEST)
	make fclean -C lib/phoenix

tests_run:	$(OBJ)
	gcc -o $(NAMETEST) $(TEST_SRC) $(OBJTEST) $(CFLAGS_TEST) $(L)
	./$(NAMETEST)

re:	fclean	all

.PHONY:	all clean fclean re
