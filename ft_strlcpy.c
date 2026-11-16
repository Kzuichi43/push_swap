/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 11:59:53 by alexgonz          #+#    #+#             */
/*   Updated: 2026/10/02 09:41:22 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
/*
int	main(int argc, char **argv)
{
	char	str[5];
	char	arr[5] = {'H', 'O', 'L', 'A', '\0'};
	if (argc < 2)
		return (0);
	printf("VAMOS A COPIAR ARGV[1]\n");
	printf("ARGV[1]: %s\n", argv[1]);
	printf("DESPUES %ld, con valor %s\n", 
		ft_strlcpy(str, arr, strlen(arr)), str);
	return (0);
}*/
