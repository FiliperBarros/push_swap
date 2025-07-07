# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/23 19:14:12 by frocha-b          #+#    #+#              #
#    Updated: 2025/07/07 16:03:30 by frocha-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRCS = main.c push_swap.c tiny_sort.c checkers.c
OBJS = $(SRCS:.c=.o)
LIBFTDIR= libft
LIBFT = $(LIBFTDIR)/libft.a

CC = cc 
CFLAGS = -Wall -Werror -Wextra

all: $(LIBFT)$(NAME)

$(LIBFT):
	make -C $(LIBFTDIR)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $@

%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	make -C $(LIBFTDIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFTDIR) fclean

re:	fclean all
