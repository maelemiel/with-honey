##
##  PROJECT, 2022
## makefile
## File description:
## make
##

LIB =	is_prime_number.c		\
		my_count_words.c 		\
		my_digits.c 			\
		my_fabs.c				\
		my_isalpha.c			\
		my_islower.c			\
		my_isspace.c			\
		my_isupper.c			\
		my_putchar.c			\
		my_puterror.c 			\
		my_putstr.c				\
		my_sqrt.c				\
		my_str_isalpha.c 		\
		my_str_to_word_array.c 	\
		my_strcat.c				\
		my_strchr.c 			\
		my_strcmp.c				\
		my_strcpy.c				\
		my_strdup.c 			\
		my_strlen.c				\
		my_strncmp.c			\
		my_strstr.c				\
		my_strupcase.c 			\
		my_toupper.c			\
		my_word.c 				\
		print_tab.c 			\
		reverse_string.c		\
		show_number.c			\
		split_string.c 			\
		to_number.c

OBJ	=	$(LIB:.c=.o) $(SRC:.c=.o)

NAME	= libphoenix.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean	all
