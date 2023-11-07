NAME = libftprintf.a

SRC = ft_printf.c\
	ft_base.c\
	ft_putchar.c\
	ft_putnbr.c\
	ft_putnbr_t.c\
	ft_putstr.c\
	ft_pointer.c

CC = cc

CFLAGS = -Wall -Werror -Wextra

OBJ = $(SRC:.c=.o)

INCLUDE = ft_printf.h

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
		ar -rcs $(NAME) $(OBJ)

%.o: %.c $(INCLUDE)
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJ) 

fclean:
		rm -rf $(OBJ) $(NAME)

re: fclean all

.PHONY: all clean fclean re
