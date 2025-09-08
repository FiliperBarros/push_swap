# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/23 19:14:12 by frocha-b          #+#    #+#              #
#    Updated: 2025/09/08 17:02:14 by frocha-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

#Include

INCLUDE_DIR = includes

# Compiler and flags
CC = cc 
CFLAGS = -Wall -Werror -Wextra -I$(INCLUDE_DIR) -g

# Source folders
SRCS_DIR = src
OBJ_DIR = objects
OPS_DIR = $(SRCS_DIR)/operations
UTILS_DIR = $(SRCS_DIR)/utils
SORT_DIR = $(SRCS_DIR)/sorting
PARSE_DIR = $(SRCS_DIR)/parser

#Source files
SRC_FILES =	\
	$(PARSE_DIR)/checker.c \
	$(PARSE_DIR)/fill.c \
	$(PARSE_DIR)/handle_args.c	\
	$(PARSE_DIR)/parser.c \
	$(SORT_DIR)/calculate_max_bytes.c \
	$(SORT_DIR)/sort_index.c \
	$(SORT_DIR)/is_stack_sorted.c \
	$(SORT_DIR)/radix_sort.c	\
	$(SORT_DIR)/sorting.c	\
	$(SORT_DIR)/stack_size.c \
	$(SORT_DIR)/tiny_sort.c \
	$(OPS_DIR)/push.c \
	$(OPS_DIR)/reverse_rotate.c \
	$(OPS_DIR)/rotate.c	\
	$(OPS_DIR)/swap.c \
	$(UTILS_DIR)/ft_atol.c \
	$(UTILS_DIR)/exit_error.c \
	$(UTILS_DIR)/free.c\
	$(UTILS_DIR)/ft_split.c \
	$(UTILS_DIR)/get_node.c \
	$(SRCS_DIR)/main.c \
	$(SRCS_DIR)/teste.c
	
#Object files
OBJS = $(patsubst %.c,$(OBJ_DIR)/%.o,$(SRC_FILES))

# **************************************************************************** #
#                                MAKE RULES                                    #
# **************************************************************************** #

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

# Run valgrind test
valgrind : $(NAME)
	@valgrind --leak-check=full ./$(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re valgrind