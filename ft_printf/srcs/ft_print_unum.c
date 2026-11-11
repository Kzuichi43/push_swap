/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 15:56:21 by alexgonz          #+#    #+#             */
/*   Updated: 2026/11/11 09:09:38 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	digits_unum(unsigned int nbr)
{
	int	len;

	len = 1;
	while (nbr > 9)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

static void	write_unum(unsigned int nbr)
{
	char	c;

	if (nbr >= 10)
		write_unum(nbr / 10);
	c = nbr % 10 + '0';
	write(1, &c, 1);
}

int	print_unum(unsigned int nbr)
{
	write_unum(nbr);
	return (digits_unum(nbr));
}
