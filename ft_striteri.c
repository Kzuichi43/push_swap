/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 11:03:47 by alexgonz          #+#    #+#             */
/*   Updated: 2026/10/03 12:20:25 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s != NULL && s[i] && f)
	{
		f(i, &s[i]);
		i++;
	}
}
/*
int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	ft_striteri(argv[1], &ft_putchar);
	return (0);
}
*/
