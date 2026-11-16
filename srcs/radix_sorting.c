/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 15:52:26 by alexgonz          #+#    #+#             */
/*   Updated: 2026/11/16 17:02:40 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	power(int i)
{
	int	result;

	result = 1;
	if (i == 0)
		return (result);
	while (i > 0)
	{
		result *= 10;
		i--;
	}
	return (result);
}

t_radix_info	start_index(t_list **a)
{
	t_radix_info	index;

	index.i = 0;
	index.exp = 0;
	index.max = find_max(a);
	return (index);
}

int	num_digits(int max)
{
	int	i;

	i = 1;
	while (max >= 10)
	{
		max /= 10;
		i++;
	}
	return (i);
}

void	swapping(t_list **a, t_list **b)
{
	t_list	*temp;

	temp = (*a);
	*a = (*b);
	*b = temp;
}

void	radik_jelp(t_lector *registre, t_list **a, t_list **b, int exp, char *str)
{
	if (exp % 2)
	{
		if (!ft_strncmp(str, "ra", 2))
			operation_rotator(registre, a, b, "ra");
		else
			operation_putter(registre, a, b, "pb");
	}
	else
	{
		if (!ft_strncmp(str, "ra", 2))
			operation_rotator(registre, b, a, "rb");
		else
			operation_putter(registre, b, a, "pa");
	}
}

t_lector	radix_sort(t_list **a, t_list **b)
{
	t_radix_info	index;
	t_lector	registre;

	index = start_index(a);
	registre = register_innit();
	while (index.exp < num_digits(index.max))
	{
		if (index.exp % 2)
			index.digit = 9;
		else
			index.digit = 0;
        	while (index.digit <= 9 && index.digit >= 0)
		{
			index.i = ft_lstsize(*a);
			while (index.i > 0)
        	        {
				if ((((*a)->content / power(index.exp)) % 10 == index.digit))
					radik_jelp(&registre, a, b, index.exp, "pa");
				else
					radik_jelp(&registre, a, b, index.exp, "ra");
				index.i--;
                	}
			if (index.exp % 2)
				index.digit--;
			else
				index.digit++;
		}
		index.exp++;
		swapping(a, b);
        }
	if (index.exp % 2 == 0)
		swapping(a, b);
	return (registre);
}
