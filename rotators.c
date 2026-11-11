/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotators.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 18:20:49 by alexgonz          #+#    #+#             */
/*   Updated: 2026/11/11 18:43:37 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	operation_rotator(t_lector registre, t_list *a, t_list *b, char *str)
{
	if (!ft_strncmp(str, "ra", 2))
	{
		if (ra(a) != -1)
		{
			registre.ra++;
			registre.num_ops++;
		}
	}
	else if (!ft_strncmp(str, "rb", 2))
	{
		if (rb(b) != -1)
		{
			registre.rb++;
			registre.num_ops++;
		}
	}
	else if (!ft_strncmp(str, "rr", 2))
	{
		if (rr(a, b) != -1)
		{
			registre.rr++;
			registre.num_ops++;
		}
	}
}

void	operation_reverse_rotation(t_lector registre, t_list *a, t_list *b, char *str)

{
	if (!ft_strncmp(str, "rra", 3))
	{
		if (rra(a) != -1)
		{
			registre.rra++;
			registre.num_ops++;
		}
	}
	else if (!ft_strncmp(str, "rrb", 3))
	{
		if (rrb(b) != -1)
		{
			registre.rrb++;
			registre.num_ops++;
		}
	}
	else if (!ft_strncmp(str, "rrr", 3))
	{
		if (rrr(a, b) != -1)
		{
			registre.rrr++;
			registre.num_ops++;
		}
	}
}
