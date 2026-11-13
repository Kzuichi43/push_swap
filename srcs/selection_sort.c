/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 12:36:12 by alexgonz          #+#    #+#             */
/*   Updated: 2026/11/13 14:13:47 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void selection_sort(t_list **a, t_list **b, t_lector registre)
{
	size_t	i;
	int	max;

	i = 0;
	while (ft_lstsize(*a) > 1)
	{
		max = find_max(a);
		printf("THE MAXIMUM IS %d \n", max);
		registre.ra += (int)(ft_lstsize(*a) - i);
		while ((*a)->content != max)
		{
				ra(a);
				registre.ra++;
		}
		ra(a);
		pb(a, b);
		i++;
	}
	pb(a, b);
}
