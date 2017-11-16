SRC = *.c

NAME = libft.a

all : $(NAME)

$(NAME) :
	clang -c $(SRC) -I./
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all
