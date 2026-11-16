/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 10:05:22 by alexgonz          #+#    #+#             */
/*   Updated: 2026/11/16 17:52:46 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

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
	int 	pb;
	int	rrb;
	int	rrr;
	int	num_ops;
}	t_lector;

typedef struct	s_radix_info
{
	int	exp;
	int	i;
	int	max;
	int	digit;
}	t_radix_info;

int		ft_check_if_num(char *str);
int		ft_valid_identifier(char *str);
size_t		ft_count_args(char **argv, int argc);
t_list		*ft_create_a(char **argv, int argc);
int		push_swap(int argc, char **argv);
int		error_free_stack(t_list *a);
int		check_valid_input(int argc, char **argv, t_list *a);
int		check_for_repetition(t_list *a);
t_strategy	select_strategy(int argc, char **argv);
void		check_for_bench(int argc, char **argv, t_strategy *selected);
t_list		*ft_insert_at_last(t_list *last, int data);
float		disorder_metric(size_t len, int *arr);
int		*create_the_array(t_list *a);
void		print_bench(t_strategy selected, float disorder, t_lector registre);
t_lector	register_innit(void);
void		oper_rot(t_lector *registre, t_list **a, t_list **b, char *str);
void		oper_r_rot(t_lector *registre, t_list **a, t_list **b, char *str);
void		oper_swap(t_lector *registre, t_list **a, t_list **b, char *str);
void		oper_put(t_lector *registre, t_list **a, t_list **b, char *str);
int		sa(t_list *stack);
int		sb(t_list *stack);
int		ss(t_list *a_stack, t_list *b_stack);
int		pa(t_list **a_stack, t_list **b_stack);
int		pb(t_list **a_stack, t_list **b_stack);
void		ra(t_list **stack);
void		rb(t_list **stack);
void		rr(t_list **a_stack, t_list **b_stack);
void		rra(t_list **stack);
void		rrb(t_list **stack);
void		rrr(t_list **a_stack, t_list **b_stack);
int		find_max(t_list **a);
int		push(t_list **stack1, t_list **stack2);
void		rot(t_list **stack);
t_lector	selection_sort(t_list **a, t_list **b);
t_lector	radix_sort(t_list **a, t_list **b);
t_lector	bucket_sort(t_list **a, t_list **b);
void		merge_sort(t_list **b);
int		count_index(t_list **a, int max);
void		swapping(t_list **a, t_list **b);
void		print_list(t_list **a);

#endif
