/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_oper_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdyboski <zdyboski@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:23:10 by zdyboski          #+#    #+#             */
/*   Updated: 2026/11/14 15:47:50 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
//https://duckduckgo.com/?t=ftsa&q=elephant&assist=false&kbe=0&kbg=-1&kbj=1&ia=images&iax=images

int push(t_list **stack1, t_list **stack2)
{
	t_list	*temp;
	t_list	*next;

	if (!stack1 || !(*stack1))
		return (-1);
	temp = *stack1;
	*stack1 = (*stack1)->next;
	next = *stack2;
	*stack2 = temp;
	temp->next = next;
	return (1);
}

int	pb(t_list **a_stack, t_list **b_stack)
{
	if (push(a_stack, b_stack) == -1)
			return (-1);
	ft_putendl_fd("pb", 1);
	return (1);
}

int	pa(t_list **a_stack, t_list **b_stack)
{
	if (push(b_stack, a_stack) == -1)
			return (-1);
	ft_putendl_fd("pa", 1);
	return (1);
}
