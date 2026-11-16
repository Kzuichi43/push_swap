/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 11:35:17 by alexgonz          #+#    #+#             */
/*   Updated: 2026/10/03 14:13:04 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

long long int	ft_atoi(const char *nbr)
{
	int	res;
	int	i;
	int	c;

	res = 0;
	i = 0;
	c = 1;
	while (nbr[i] == ' ' || (nbr[i] >= 9 && nbr[i] <= 13))
		i++;
	if (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] == '-')
			c = -1;
		i++;
	}
	while (nbr[i] >= '0' && nbr[i] <= '9')
	{
		res *= 10;
		res += nbr[i] - '0';
		i++;
	}
	return (c * res);
}
/*
int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	printf("%d \n", ft_atoi(argv[1]));
	return (0);
}*/
