/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_oper_r.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdyboski <zdyboski@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:23:10 by zdyboski          #+#    #+#             */
/*   Updated: 2026/11/14 17:59:46 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void rot(t_list **stack)
{
	t_list	*last;
	t_list	*head;

	if (!(*stack) || !stack || ft_lstsize(*stack) < 2)
		return ;
	last = *stack;
	head = (*stack)->next;
	while ((*stack)->next != NULL)
		*stack = (*stack)->next;
	(*stack)->next = last;
	last->next = NULL;
	*stack = head;
}

void	ra(t_list **stack)
{
	rot(stack);
	ft_putendl_fd("ra", 1);
}

void	rb(t_list **stack)
{
	rot(stack);
	ft_putendl_fd("rb", 1);
}

void	rr(t_list **a_stack, t_list **b_stack)
{
	rot(a_stack);
	rot(b_stack);
	ft_putendl_fd("rr", 1);
}
