/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 11:02:17 by alexgonz          #+#    #+#             */
/*   Updated: 2026/11/10 11:34:07 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_swap(int argc, char **argv)
{
	t_list	**a;
	t_list	*b = NULL;
	t_strategy	selected;
	int	num_op;

	if (argc < 3)
			return (-1);
	*a = ft_create_a(argv, argc);
	if (!a)
			return (-1);
	if (check_valid_input(argc, argv, a) == -1)
			return (error_free_stack(a));
	selected = select_strategy(argc, argv);
}

int	error_free_stack(t_list **a)
{
	t_list	*temp;

	if (!a || !*a)
		return (-1);
	temp = *a;
	while (a && *a)
	{
		temp = (*a)->next;
		free(*a);
		*a = temp;
	}
	*a = NULL;
	return (-1);
}
