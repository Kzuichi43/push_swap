/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 11:02:17 by alexgonz          #+#    #+#             */
/*   Updated: 2026/11/11 11:52:50 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_swap(int argc, char **argv)
{
	t_list	*a;
	//t_list	*b = NULL;
	t_strategy	selected;
	//int	num_op;

	if (argc < 3)
			return (-1);
	a = ft_create_a(argv, argc);
	if (!a)
			return (-1);
	if (check_valid_input(argc, argv, a) == -1)
			return (error_free_stack(a));
	selected = select_strategy(argc, argv);
	print_bench(selected, disorder_metric(ft_lstsize(a), create_the_array(a)));
	error_free_stack(a);
	return (0);
}

int	error_free_stack(t_list *a)
{
	t_list	*temp;

	if (!a)
		return (-1);
	temp = a;
	while (a)
	{
		temp = a->next;
		free(a);
		a = temp;
	}
	a = NULL;
	return (-1);
}

int	*create_the_array(t_list *a)
{
	int	*arr;
	int	i = 0;
	t_list	*temp;

	if (!a || ft_lstsize(a) < 1)
			return (NULL);
	arr = malloc(sizeof(int) * (ft_lstsize(a) + 1));
	if (!arr)
			return (NULL);
	temp = a;
	while (temp)
	{
		arr[i] = temp->content;
		temp = temp->next;
		i++;
	}
	return (arr);
}

float	disorder_metric(size_t len, int *arr)
{
	size_t	i = 0;
	size_t	j = 0;
	int	mistakes = 0;
	int	total_pairs = 0;

	while (i < len)
	{
		j = i + 1;
		while (j < len + 1)
		{
			total_pairs++;
			if (arr[i] > arr[j])
					mistakes++;
			j++;
		}
		i++;
	}
	free(arr);
	return (((float)mistakes / (float)total_pairs) * 100);
}
