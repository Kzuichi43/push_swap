/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 11:02:17 by alexgonz          #+#    #+#             */
/*   Updated: 2026/11/16 17:03:18 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static t_lector	choose_from_disorder(t_list **a, t_list **b, float disorder)
{
	t_lector	registre;

	if (disorder < 20.00)
		registre = selection_sort(a, b);
	else if (disorder >= 20 && disorder < 50)
		registre = bucket_sort(a, b);
	else
		registre = radix_sort(a, b);
	return (registre);
}

int	push_swap(int argc, char **argv)
{
	t_list	*a;
	//t_list *temp;
	float	value;
	t_list	*b = NULL;
	t_strategy	selected;
	t_lector	registre;
	//int	num_op;
	//int	i;

	if (argc < 3)
			return (-1);
	a = ft_create_a(argv, argc);
	if (!a)
			return (-1);
	if (check_valid_input(argc, argv, a) == -1)
			return (error_free_stack(a));
	selected = select_strategy(argc, argv);
	value = disorder_metric(ft_lstsize(a), create_the_array(a));
	if (selected.strat == 1)
		registre = selection_sort(&a, &b);
	else if (selected.strat == 2)
	{
		registre = bucket_sort(&a, &b);
		while (ft_lstsize(b) > 0)
			operation_putter(&registre, &a, &b, "pa");
		swapping(&a, &b);
	}
	else if (selected.strat == 3)
		registre = radix_sort(&a, &b);
	else
		registre = choose_from_disorder(&a, &b, value);
	if (selected.bench)
		print_bench(selected, value, registre);
	error_free_stack(b);
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
	temp = NULL;
	return (arr);
}

float	disorder_metric(size_t len, int *arr)
{
	size_t	i = 0;
	size_t	j = 0;
	int	mistakes = 0;
	int	total_pairs = 0;

	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
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
