/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_oper_rr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdyboski <zdyboski@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:23:10 by zdyboski          #+#    #+#             */
/*   Updated: 2026/11/13 09:15:53 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void rrot(t_list **stack)
{
	t_list	*head;
	t_list	*first;
	t_list	*temp;
	int	len;
	int	i;

	i = 0;
	first = *stack;
	temp = *stack;
	len = ft_lstsize(*stack);
	while (i < (len - 2))
	{
		temp = temp->next;
		i++;
	}
	temp->next->next = first;
	head = temp->next;
	temp->next = NULL;
	*stack = head;
}

void	rra(t_list **stack)
{
	rrot(stack);
	ft_putendl_fd("ra", 1);
}

void	rrb(t_list **stack)
{
	rrot(stack);
	ft_putendl_fd("rb", 1);
}

void	rrr(t_list **a_stack, t_list **b_stack)
{
	rrot(a_stack);
	rrot(b_stack);
	ft_putendl_fd("rrr", 1);
}
