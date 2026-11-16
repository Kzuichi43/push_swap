/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 11:52:55 by alexgonz          #+#    #+#             */
/*   Updated: 2026/10/02 09:12:52 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*static void	ft_putstr(char *str, int n)
{
	int	i;

	i = 0;
	while (i < 2 * n)
	{
		if (str[i] == '\0')
			write(1, "h", 1);
		i++;
	}
}
*/
void	*ft_calloc(size_t n, size_t size)
{
	int				i;
	long			len;
	unsigned char	*str;

	if (n < 1 || size < 1)
		return (malloc(0));
	len = n * size;
	if (n != '\0' && len / n != size)
		return (0);
	str = malloc(n * size);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i++] = '\0';
	}
	return ((void *)str);
}
/*
int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	char	*str;

	str = calloc(atoi(argv[1]), 1);
	ft_putstr(str, atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}*/
