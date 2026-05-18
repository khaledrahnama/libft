# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khaledrahnama <khaledrahnama@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/06 11:04:54 by khaledrahna       #+#    #+#              #
#    Updated: 2026/05/18 19:31:15 by khaledrahna      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ── Variables ─────────────────────────────────────────────
NAME     = libft.a
CC       = cc
CFLAGS   = -Wall -Wextra -Werror
TEST_BIN = tests/test_all

SRCS     = ft_strlen.c \
           ft_isdigit.c \
           ft_isalpha.c
OBJS     = $(SRCS:.c=.o)

# ── Rules ─────────────────────────────────────────────────
all: $(NAME)

$(NAME): $(OBJS)
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

test: $(NAME)
	$(CC) $(CFLAGS) tests/test_all.c -L. -lft -o $(TEST_BIN)
	./$(TEST_BIN)

clean:
	rm -f $(OBJS)

fclean: clean
fclean: clean
	rm -f $(NAME)

re: fclean all

re: fclean all

.PHONY: all clean fclean re test