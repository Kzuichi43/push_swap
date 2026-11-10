/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 10:05:22 by alexgonz          #+#    #+#             */
/*   Updated: 2026/11/10 11:35:00 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

//# include "ft_printf.h"
# include "libft.h"

typedef struct	s_strategy
{
	int	simple;
	int	medium;
	int	complex;
	int	bench;
}	t_strategy;

int	ft_check_if_num(char *str);
int	ft_valid_identifier(char *str);
size_t	ft_count_args(char **argv, int argc);
t_list	*ft_create_a(char **argv, int argc);
int	push_swap(int argc, char **argv);
int	error_free_stack(t_list **a);

#endif
