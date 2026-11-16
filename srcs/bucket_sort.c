/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bucket_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 18:20:42 by alexgonz          #+#    #+#             */
/*   Updated: 2026/11/16 16:56:40 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int     find_min(t_list **a);

int	calculate_sqrt(t_list **a)
{
	int	sqrt;
	int	len;

	len = ft_lstsize(*a);
	sqrt = 1;
	while (sqrt <= len / 2)
	{
		if (sqrt * sqrt >= len)
			return (sqrt);
		sqrt++;
	}
	return (sqrt);
}

int	find_min(t_list **a)
{
	t_list *temp;
	int	min;

	if (!a || !(*a))
		return (0);
	temp = *a;
	min = temp->content;
	while (temp)
	{
		if (min > temp->content)
			min = temp->content;
		temp = temp->next;
	}
	temp = NULL;
	return (min);
}

int	count_index(t_list **a, int max)
{
	int	i;
	t_list *temp;

	temp = *a;
	i = 0;
	while (temp->content != max)
	{
		i++;
		temp = temp->next;
	}
	temp = NULL;
	return (i);
}

t_lector	bucket_sort(t_list **a, t_list **b)
{
	int     max;
	int	min;
        int     len;
	int	i;
	int     size_bucket;
        t_lector        registre;

	len = ft_lstsize(*a);
        registre = register_innit();
	max = find_max(a);
	size_bucket = 2 * (find_max(a) + find_min(a)) / calculate_sqrt(a);
	min = max - size_bucket;
	while (min > find_min(a) - size_bucket)
	{
		i = 0;
		while (i < len)
		{
			if (min <= (*a)->content && max >= (*a)->content)
				operation_putter(&registre, a, b, "pb");
			else
				operation_rotator(&registre, a, b, "ra");
			i++;
		}
		while (ft_lstsize(*b) > 0)
		{
			if ((*b)->content == find_max(b))
				operation_putter(&registre, a, b, "pa");
			else
			{
				if ((size_t)count_index(b, find_max(b)) > ft_lstsize(*b) / 2)
					operation_reverse_rotation(&registre, a, b, "rrb");
				else
					operation_rotator(&registre, a, b, "rb");
			}
		}
		max = min + 1;
		min -= size_bucket - 1;
	}
	while (ft_lstsize(*a) > 0)
		operation_putter(&registre, a, b, "pb");
	return (registre);
}
