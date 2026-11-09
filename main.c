/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 10:04:25 by alexgonz          #+#    #+#             */
/*   Updated: 2026/11/09 17:33:42 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_list	*head;

	if (argc < 3)
			return (0);
	head = ft_create_a(argv, argc);
	printf("LENGTH OF %u\n", ft_lstsize(head));
	while (head)
	{
		printf("%d \n", head->content);
		head = head->next;
	}
	return (0);
}
