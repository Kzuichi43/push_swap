/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_algorithms.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 12:27:55 by alexgonz          #+#    #+#             */
/*   Updated: 2026/11/13 12:35:55 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_max(t_list **a)
{
	int	max;
	size_t	len;
	size_t	i = 0;

	if (!a || !(*a))
			return (0);
	len = ft_lstsize(*a);
	max = (*a)->content;
	while (i < len)
	{
		if (max < (*a)->content)
				max = (*a)->content;
		ra(a);
		i++;
	}
	return (max);
}
