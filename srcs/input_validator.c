/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validator.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 11:10:34 by alexgonz          #+#    #+#             */
/*   Updated: 2026/11/13 09:08:16 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_valid_input(int argc, char **argv, t_list *a)
{
	int	i;

	i = 1;
	while (argc > i)
	{
		if (ft_check_if_num(argv[i]) == -1 && ft_valid_identifier(argv[i]) == -1)
				return (-1);
		i++;
	}
	return (check_for_repetition(a));
}

int	check_for_repetition(t_list *a)
{
	t_list	*fixed;
	t_list	*moves;

	if (!a)
		return (-1);
	fixed = a;
	moves = a;
	while (fixed->next)
	{
		moves = fixed->next;
		while (moves)
		{
			if (moves->content == fixed->content)
					return (-1);
			moves = moves->next;
		}
		fixed = fixed->next;
	}
	return (1);
}
