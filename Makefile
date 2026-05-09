# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: krahnama <krahnama@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/06 11:04:54 by khaledrahna       #+#    #+#              #
#    Updated: 2026/05/09 14:39:24 by krahnama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_strlen.c ft_isdigit.c ft_isalpha.c \
       ft_isalnum.c ft_isascii.c ft_isprint.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: $(NAME)
	cc -Wall -Wextra -Werror tests/test_ft_strlen.c -L. -lft -o tests/test_strlen
	./tests/test_strlen