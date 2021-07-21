# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bagovic <bagovic@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/06 15:12:24 by bagovic           #+#    #+#              #
#    Updated: 2021/07/21 11:46:55 by bagovic          ###   ########.fr        #
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
ft_strncmp.c\
ft_memchr.c\
ft_memcmp.c\
ft_strnstr.c\
ft_atoi.c\
ft_calloc.c\
ft_strdup.c\
ft_substr.c\
ft_strjoin.c

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

f: fclean
	cd /Users/bagovic/Desktop/Libft//libft-unit-test-master ; make re ; make f ; cd ..
	make fclean
	bash /Users/bagovic/Desktop/Libft/libft-war-machine-master/grademe.sh
	norminette $(SRC) libft.h

ft:
	$(CC) $(CFLAGS) -o unittest.o $(UT_SRC) $(SRC)
	./unittest.o

qt: fclean
	$(CC) -o unittest.o $(UT_SRC) $(SRC)
	./unittest.o