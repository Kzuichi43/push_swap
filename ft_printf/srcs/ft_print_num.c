/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 16:21:05 by alexgonz          #+#    #+#             */
/*   Updated: 2026/11/11 09:09:28 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	num_digits(long int nbr)
{
	int	i;

	i = 1;
	if (nbr < 0)
	{
		nbr *= -1;
		i++;
	}
	while (nbr > 9)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

static void	write_num(long int nbr)
{
	char	c;

	if (nbr < 0)
	{
		nbr *= -1;
		write(1, "-", 1);
	}
	if (nbr >= 10)
		write_num(nbr / 10);
	c = nbr % 10 + '0';
	write(1, &c, 1);
}

int	print_num(int nbr)
{
	long	n;

	n = (long)nbr;
	write_num(n);
	return (num_digits(n));
}
