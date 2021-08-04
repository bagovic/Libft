# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bagovic <bagovic@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/06 15:12:24 by bagovic           #+#    #+#              #
#    Updated: 2021/08/04 17:04:44 by bagovic          ###   ########.fr        #
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
ft_strjoin.c\
ft_strtrim.c\
ft_split.c\
ft_itoa.c\
ft_strmapi.c\
ft_striteri.c\
ft_putchar_fd.c\
ft_putstr_fd.c\
ft_putendl_fd.c\
ft_putnbr_fd.c
BONUSSRC = ft_lstnew.c\
ft_lstadd_front.c\
ft_lstsize.c\
ft_lstlast.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRC)
	ar r $(NAME) $(SRC:.c=.o)
bonus: fclean
	$(CC) $(CFLAGS) -c $(BONUSSRC)
	@$(MAKE) all

clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: fclean all


f: fclean
	cd /Users/bagovic/Documents/C/Libft/libft-unit-test-master ; make re ; make f ; cd ..
	bash /Users/bagovic/Documents/C/Libft/libft-war-machine-master/grademe.sh
	norminette $(SRC) libft.h

ff: fclean
	bash /Users/bagovic/Documents/C/Libft/libft-war-machine-master/grademe.sh -ob