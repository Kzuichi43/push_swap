/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_void.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 16:39:36 by alexgonz          #+#    #+#             */
/*   Updated: 2026/10/07 10:45:14 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	void_digits(unsigned long long int ptr)
{
	size_t	len;

	if (ptr == 0)
		return (1);
	len = 0;
	while (ptr != 0)
	{
		ptr /= 16;
		len++;
	}
	return (len);
}

static void	write_void(unsigned long long int ptr)
{
	static char	base[16];

	ft_strlcpy(base, "0123456789abcdef", 16);
	if (ptr >= 16)
		write_void(ptr);
	write(1, &base[ptr % 16], 1);
}

int	print_void(void *ptr)
{
	if (!ptr)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	write_void((unsigned long long int)ptr);
	return (void_digits((unsigned long long int)ptr) + 2);
}
