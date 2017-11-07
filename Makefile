NAME = libft.a

SRC = srcs/ft_strlen.c srcs/ft_strdup.c srcs/ft_strcpy.c srcs/ft_strncpy.c srcs/ft_memset.c srcs/ft_bzero.c srcs/ft_memcpy.c srcs/ft_memccpy.c srcs/ft_memmove.c

INC = includes

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC) -I $(INC)
	ar rc $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

ma:
	gcc -Wall -Wextra -Werror main.c -L. -lft

re: fclean all
