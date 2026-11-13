/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapper_putter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 15:31:07 by alexgonz          #+#    #+#             */
/*   Updated: 2026/11/13 09:20:57 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	operation_swapper(t_lector registre, t_list *a, t_list *b, char *str)
{
	if (!ft_strncmp(str, "sa", 2))
	{
		if (sa(a) != -1)
		{
			registre.sa++;
			registre.num_ops++;
		}
	}
	else if (!ft_strncmp(str, "sb", 2))
	{
		if (sb(b) != -1)
		{
			registre.sb++;
			registre.num_ops++;
		}
	}
	else if (!ft_strncmp(str, "ss", 2))
	{
		if (ss(a, b) != -1)
		{
			registre.ss++;
			registre.num_ops++;
		}
	}
}

void	operation_putter(t_lector registre, t_list *a, t_list *b, char *str)
{
	if (!ft_strncmp(str, "pa", 2))
	{
		if (pa(&a, &b) != -1)
		{
			registre.pa++;
			registre.num_ops++;
		}
	}
	else if (!ft_strncmp(str, "pb", 2))
	{
		if (pb(&a, &b))
		{
			registre.pb++;
			registre.num_ops++;
		}
	}
}
