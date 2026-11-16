/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_algorithms.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 12:27:55 by alexgonz          #+#    #+#             */
/*   Updated: 2026/11/14 13:48:57 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_max(t_list **a)
{
	int	max;
	t_list	*temp;

	if (!a || !(*a))
			return (0);
	max = (*a)->content;
	temp = (*a);
	while (temp)
	{
		if (max < (temp)->content)
				max = (temp)->content;
		temp = temp->next;
	}
	return (max);
}
