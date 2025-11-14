NAME = libftprintf.a

SRC = print_c.c print_s.c print_p.c \
	print_u.c print_x.c print_d.c \
	print_percent.c ft_printf.c

CC = cc
CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft
	cp libft/libft.a .
	ar -x libft.a
	ar rcs $(NAME) $(OBJ) *.o
	rm -f libft.a *.o

clean:
	make clean -C libft
	rm -f $(OBJ)

fclean: clean
	make fclean -C libft
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re