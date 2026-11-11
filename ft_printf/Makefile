# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/07 10:22:52 by alexgonz          #+#    #+#              #
#    Updated: 2026/11/10 19:23:47 by alexgonz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror -I../includes/
RM = rm -rf
NAME = libftprintf.a
LIBFT = ../libft/libft.a

SRCS = ft_printf.c srcs/ft_print_hex.c srcs/ft_print_num.c \
	   srcs/ft_print_void.c srcs/ft_print_char.c srcs/ft_print_unum.c srcs/ft_print_float.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	cp $(LIBFT) $(NAME)
	ar rc $(NAME) $(OBJS)
$(LIBFT):
	$(MAKE) -C ../libft
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	$(MAKE) -C ../libft clean
	$(RM) $(OBJS)
fclean: clean
	$(MAKE) -C ../libft fclean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re

.SILENT:
