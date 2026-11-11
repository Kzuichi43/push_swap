# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/07 10:22:52 by alexgonz          #+#    #+#              #
#    Updated: 2026/11/10 19:27:19 by alexgonz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror -I./includes/
RM = rm -rf
NAME = push_swap.a
PRINT_DIR = ./ft_printf
PRINT_LIB = $(PRINT_DIR)/libftprintf.a
SRCS = ft_parser.c input_validator.c push_handler.c strategy_handler.c print_bench.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(PRINT_LIB)
	cp $(PRINT_LIB) $(NAME)
	ar rcs $(NAME) $(OBJS)
$(PRINT_LIB):
	$(MAKE) -C $(PRINT_DIR)

clean:
	$(MAKE) clean -C $(PRINT_DIR)
	$(RM) $(OBJS)
fclean: clean
	$(MAKE) fclean -C $(PRINT_DIR)
	$(RM) $(NAME)
re: fclean all
	clear
	tree
file: re
	$(CC) main.c $(NAME) -o out

.PHONY: all clean fclean re

.SILENT:

