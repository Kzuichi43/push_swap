/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strategy_handler.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 11:35:13 by alexgonz          #+#    #+#             */
/*   Updated: 2026/11/10 11:51:54 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_strategy	select_strategy(int argc, char **argv)
{
	t_strategy	return_val;
	int	i = 1;

	return_val.strat = 0;
	while (i < argc)
	{
		if (!ft_strncmp(argv[i], "--simple", 9))
		{
			return_val.strat = 1;
			break;
		}
		else if (!ft_strncmp(argv[i], "--medium", 9))
		{
			return_val.strat = 2;
			break;
		}
		else if (!ft_strncmp(argv[i], "--complex", 9))
		{
			return_val.strat = 3;
			break
		}
		else if (!ft_strncmp(argv[i],"--adaptative", 13))
				break;
		i++;
	}
	check_for_bench(argc, argv, &return_val);
	return (return_val);
}

void	check_for_bench(int argc, char **argv, t_strategy *selected)
{
	int	i;

	selected.bench = 0;
	while (i < argc)
	{
		if (!ft_strncmp(argv[i], "--bench", 8))
		{
			selected.bench = 1;
			return ;
		}
	}
}
