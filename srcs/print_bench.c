/**************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bench.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 15:41:28 by alexgonz          #+#    #+#             */
/*   Updated: 2026/11/13 09:08:37 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"


static void	printf_adaptative(float disorder_metric)
{
	ft_printf("[bench] strategy:  Adaptative / ");
	if (disorder_metric < 20)
			ft_printf("O(n^2)\n");
	else if (20 <= disorder_metric && disorder_metric < 50)
			ft_printf("O(n√n)\n");
	else
			ft_printf("O(nlog(n))\n");
			
}
void	print_bench(t_strategy selected, float disorder_metric)
{
	ft_printf("[bench] disorder:  %f%%\n", disorder_metric);
	if (selected.strat == 1)
			ft_printf("[bench] strategy:  Simple / O(n^2)\n");
	else if (selected.strat == 2)
			ft_printf("[bench] strategy:  Medium / O(n√n)\n");
	else if (selected.strat == 3)
			ft_printf("[bench] strategy:  Complex / O(nlog(n))\n");
	else
			printf_adaptative(disorder_metric);
	//print_operations();
}
