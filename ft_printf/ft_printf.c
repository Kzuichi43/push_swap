/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 13:09:31 by alexgonz          #+#    #+#             */
/*   Updated: 2026/11/10 18:51:43 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	index_decide(va_list args, char c)
{
	if (c == 'c')
		return (print_char(va_arg(args, int)));
	else if (c == 's')
		return (print_str(va_arg(args, char *)));
	else if (c == 'i' || c == 'd')
		return (print_num(va_arg(args, int)));
	else if (c == 'u')
		return (print_unum(va_arg(args, unsigned int)));
	else if (c == 'X')
		return (print_hex(va_arg(args, ssize_t), 1));
	else if (c == 'x')
		return (print_hex(va_arg(args, ssize_t), -1));
	else if (c == '%')
		return (print_char('%'));
	else if (c == 'p')
		return (print_void(va_arg(args, void *)));
	else if (c == 'f')
		return (print_float(va_arg(args, double)));
	else
		return (-1);
}

int	ft_printf(const char *str, ...)
{
	size_t	i;
	va_list	args;
	int		ret_val;

	va_start(args, str);
	ret_val = 0;
	i = 0;
	if (!str)
		return (-1);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			ret_val += index_decide(args, str[i + 1]);
			i++;
		}
		else
			ret_val += write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (ret_val);
}
