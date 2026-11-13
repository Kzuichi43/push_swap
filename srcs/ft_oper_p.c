/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_oper_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdyboski <zdyboski@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:23:10 by zdyboski          #+#    #+#             */
/*   Updated: 2026/11/13 14:07:17 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int push(t_list **stack1, t_list **stack2)
{
	t_list	*temp;
	int	len;
	int	i;

	i = 0;
	len = ft_lstsize(*stack2);
	if (len < 1)
			return (-1);
	temp = *stack2;
	if (len == 1)
	{
		if (ft_lstsize(*stack1) < 1)
		{
				*stack1 = temp;
				(*stack1)->next = NULL;
		}
		else
			ft_lstlast(*stack1)->next = temp;
		temp = NULL;
		return (1);
	}
	while (i < (len - 2))
	{
		temp = temp->next;
		i++;
	}
	if (ft_lstsize(*stack1) < 1)
	{
		*stack1 = temp;
		(*stack1)->next = NULL;
		temp->next = NULL;
		return (1);
	}
	ft_lstlast(*stack1)->next = temp;
	temp->next = NULL;
	return (1);
}

int	pa(t_list **a_stack, t_list **b_stack)
{
	if (push(a_stack, b_stack) == -1)
			return (-1);
	ft_putendl_fd("pa", 1);
	return (1);
}

int	pb(t_list **a_stack, t_list **b_stack)
{
	if (push(b_stack, a_stack) == -1)
			return (-1);
	ft_putendl_fd("pb", 1);
	return (1);
}
