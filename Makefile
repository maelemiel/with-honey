##
## PROJECT, 2023
## honey
## File description:
## Makefile
##

MAIN 		=   src/main.c					\

FILES		=	honey.c      				\
				take_number_of_honey.c 		\

TEST_FILES 	=  	test_main.c

SRCDIR 		= 	src/
TEST_DIR	=	tests/
SRC 		=	$(addprefix $(SRCDIR), $(FILES))
TEST_SRC	=	$(addprefix $(TEST_DIR), $(TEST_FILES))
MAIN_OBJ 	=	$(MAIN:.c=.o)
OBJ			= 	$(SRC:.c=.o)
OBJTEST 	= 	$(SRC:%.c=%.o)


NAME		= 	honey

NAMETEST 	= 	unit_tests

CFLAGS	   +=   -g -I./includes -W -Wall -Wextra
CFLAGS_TEST	=	$(CFLAGS) -lcriterion

$(NAME): 	 $(OBJ) $(MAIN_OBJ)
	@gcc -o $(NAME) $(OBJ) $(MAIN_OBJ) $(CFLAGS)

all:	$(NAME)

clean:
	@rm -f $(OBJ)
	@rm -f $(MAIN_OBJ)

fclean: clean
	@rm -f $(NAME)
	@rm -f $(NAMETEST)

tests_run:	$(OBJ)
	gcc -o $(NAMETEST) $(TEST_SRC) $(OBJTEST) -I./includes -lcriterion
	./$(NAMETEST)

re:	fclean	all

.PHONY:	all clean fclean re
