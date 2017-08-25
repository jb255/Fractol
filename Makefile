NAME = fractol
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = parsing.c init.c julia1at5.c mandelandship.c param.c multi.c multi2.c
OBJS = $(SRCS:.c=.o)
RM = rm -f

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	make -C ./libft/
	$(CC) -o $(NAME) $^ ./libft/libft.a -lmlx -framework OpenGL -framework AppKit

clean:
	make -C ./libft/ clean
	$(RM) $(OBJS)

fclean: clean
	make -C ./libft/ fclean
	$(RM) $(NAME)

re: fclean all
