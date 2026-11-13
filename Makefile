# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/07 10:22:52 by alexgonz          #+#    #+#              #
#    Updated: 2026/11/13 09:38:01 by alexgonz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror -I./includes/
RM = rm -rf
NAME = push_swap.a
PRINT_DIR = ./ft_printf
PRINT_LIB = $(PRINT_DIR)/libftprintf.a
SRCS = srcs/ft_parser.c srcs/input_validator.c srcs/push_handler.c srcs/strategy_handler.c srcs/print_bench.c \
	   srcs/ft_oper_p.c srcs/ft_oper_rr.c srcs/ft_oper_r.c srcs/ft_oper_s.c srcs/rotators.c srcs/swapper_putter.c \
	   srcs/operation_register.c
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
	rm out
	$(RM) $(NAME)
re: fclean all
	clear
	tree
file: re
	$(CC) main.c $(NAME) -o out

.PHONY: all clean fclean re

.SILENT:

