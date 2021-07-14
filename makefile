# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bagovic <bagovic@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/06 15:12:24 by bagovic           #+#    #+#              #
#    Updated: 2021/07/14 16:13:35 by bagovic          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_memset.c\
ft_bzero.c\
ft_memcpy.c\
ft_isalpha.c\
ft_isdigit.c\
ft_isalnum.c\
ft_isascii.c\
ft_isprint.c\
ft_strlen.c\
ft_memmove.c\
ft_strlcpy.c\
ft_strlcat.c\
ft_toupper.c\
ft_tolower.c\
ft_strchr.c\
ft_strrchr.c\
ft_strncmp.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRC)
	ar r $(NAME) $(SRC:.c=.o)

clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: fclean all



UT_SRC = main.c\
unittest.c

dclean: fclean
	rm -fr *.dSYM
	rm -fr .vscode

unittest: fclean
	cd /Users/bagovic/Desktop/Libft//libft-unit-test-master ; make re ; make f ; cd ..
	bash /Users/bagovic/Desktop/Libft/libft-war-machine-master/grademe.sh
	norminette $(SRC) libft.h

#unittest: fclean
#	$(CC) $(CFLAGS) -o unittest.o $(UT_SRC) $(SRC)
#	./unittest.o
#	norminette $(SRC) libft.h

quicktest: fclean
	$(CC) -o unittest.o $(UT_SRC) $(SRC)
	./unittest.o