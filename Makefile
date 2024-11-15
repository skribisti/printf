NAME = libftprintf.a
SRC = ft_print_c.c  ft_print_u.c  ft_putnbr_base.c\
ft_print_d.c  ft_print_p.c  ft_print_x.c  ft_size.c\
ft_printf.c	  ft_print_s.c	ft_print_X.c  ft_strlen.c

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