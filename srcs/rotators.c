/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotators.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 18:20:49 by alexgonz          #+#    #+#             */
/*   Updated: 2026/11/13 09:20:42 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	operation_rotator(t_lector registre, t_list *a, t_list *b, char *str)
{
	if (!ft_strncmp(str, "ra", 2))
	{
		if (ft_lstsize(a) >= 2)
		{
			ra(&a);
			registre.ra++;
			registre.num_ops++;
		}
	}
	else if (!ft_strncmp(str, "rb", 2))
	{
		if (ft_lstsize(b) >= 2)
		{
			rb(&b);
			registre.rb++;
			registre.num_ops++;
		}
	}
	else if (!ft_strncmp(str, "rr", 2))
	{
		if (ft_lstsize(b) >= 2 && ft_lstsize(a) >= 2)
		{
			rr(&a, &b);
			registre.rr++;
			registre.num_ops++;
		}
	}
}

void	operation_reverse_rotation(t_lector registre, t_list *a, t_list *b, char *str)

{
	if (!ft_strncmp(str, "rra", 3))
	{
		if (ft_lstsize(a) >= 2)
		{
			rra(&a);
			registre.rra++;
			registre.num_ops++;
		}
	}
	else if (!ft_strncmp(str, "rrb", 3))
	{
		if (ft_lstsize(b) >= 2)
		{
			rrb(&b);
			registre.rrb++;
			registre.num_ops++;
		}
	}
	else if (!ft_strncmp(str, "rrr", 3))
	{
		if (ft_lstsize(a) >= 2 && ft_lstsize(b) >= 2)
		{
			rrr(&a, &b);
			registre.rrr++;
			registre.num_ops++;
		}
	}
}
