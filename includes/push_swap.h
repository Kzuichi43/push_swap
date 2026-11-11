/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 10:05:22 by alexgonz          #+#    #+#             */
/*   Updated: 2026/11/11 15:30:49 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

//# include "ft_printf.h"
# include "libft.h"
# include "ft_printf.h"
# include <stdio.h>

typedef struct	s_strategy
{
	int	strat;
	int	bench;
}	t_strategy;

typedef struct	s_lector
{
	int	sa;
	int	ra;
	int	sb;
	int	rb;
	int	ss;
	int	rr;
	int	pa;
	int	rra;
	int pb;
	int	rrb;
	int	rrr;
	int	num_ops;
}	t_lector;

int	ft_check_if_num(char *str);
int	ft_valid_identifier(char *str);
size_t	ft_count_args(char **argv, int argc);
t_list	*ft_create_a(char **argv, int argc);
int	push_swap(int argc, char **argv);
int	error_free_stack(t_list *a);
int	check_valid_input(int argc, char **argv, t_list *a);
int	check_for_repetition(t_list *a);
t_strategy	select_strategy(int argc, char **argv);
void	check_for_bench(int argc, char **argv, t_strategy *selected);
t_list	*ft_insert_at_last(t_list *last, int data);
float	disorder_metric(size_t len, int *arr);
int	*create_the_array(t_list *a);
void	print_bench(t_strategy selected, float disorder_metric);
void	operation_register(t_lector registre, t_list *a, t_list *b, char *str);
t_lector	register_innit(void);

#endif
