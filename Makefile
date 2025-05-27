NAME = libftprintf.a
SRC = ft_print_c.c  ft_print_d.c  ft_printf.c\
ft_print_p.c  ft_print_s.c  ft_print_u.c\
ft_print_bx.c ft_print_x.c ft_size.c\
ft_strlen.c ft_putnbr_base.c

OBJ = $(SRC:.c=.o)
FLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re bonus

all : $(NAME)

$(NAME) :
	cc $(FLAGS) -c $(SRC)
	ar rcs $(NAME) $(OBJ)
	
clean :
	rm -f $(NAME)

fclean : clean
	rm -rf $(OBJ)

dev: fclean
	git add *; git commit -m "dev"; git push --force;

re : fclean all dev