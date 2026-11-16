/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 12:20:35 by alexgonz          #+#    #+#             */
/*   Updated: 2026/10/02 09:29:39 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					i;
	const unsigned char		*a;

	i = 0;
	a = (const unsigned char *)s;
	while (i < n)
	{
		if (a[i] == (unsigned char)c)
			return ((void *)&a[i]);
		i++;
	}
	return (0);
}
/*
int	main(int argc, char **argv)
{
	if (argc < 3)
		return (0);
	printf("%s \n", (char *)ft_memchr(argv[1], argv[2][0],
		(size_t)strlen(argv[1])));
	return (0);
}*/
