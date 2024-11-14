NAME = libftprintf.a
SRC = ft_printf.c
OBJ = $(SRC:.c=.o)
FLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re bonus

all : $(NAME)
	@true

$(NAME) :
	gcc $(FLAGS) -c $(SRC)
	ar rcs $(NAME) $(OBJ)

clean :
	rm -rf $(NAME)

fclean :
	rm -rf $(OBJ)

re : fclean all

dev :
	make fclean; git add .; git commit -m "auto update"; git push; /home/norabino/francinette/tester.sh; make fclean