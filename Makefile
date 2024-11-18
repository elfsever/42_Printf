SRC 		= ft_printf.c printf_char.c printf_string.c printf_ptr.c \
				printf_nbr.c printf_hex.c printf_uint.c \

OBJS 		= $(SRC:.c=.o)

NAME 		= libftprintf.a
CC 			= cc
CFLAGS 		= -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@  


fclean: clean
	rm -rf $(NAME)	

clean:
	rm -f $(OBJS)

re: fclean all

.PHONY: all clean fclean re