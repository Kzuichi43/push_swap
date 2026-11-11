/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_float.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 18:21:59 by alexgonz          #+#    #+#             */
/*   Updated: 2026/11/11 09:09:18 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	num_digits(double nbr)
{
	if (nbr >= 10)
			return (4);
	else if (nbr == 100)
			return (5);
	else if (nbr < 10 || nbr >= 0)
			return (3);
	else
			return (-1);
}

static void	write_num(int nbr)
{
	char	c;

	if (nbr >= 10)
			write_num(nbr / 10);
	c = nbr % 10 + '0';
	write(1, &c, 1);
}

int	print_float(double n)
{
	int	integer_approx;

	if (n > 100 || n < 0)
			return (-1);
	write_num((int)n);
	write(1, ".", 1);
	integer_approx = (int)n;
	integer_approx *= 100;
	write_num((int)(n * 100 - integer_approx));
	return (num_digits(n));
}
