/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 12:28:18 by alexgonz          #+#    #+#             */
/*   Updated: 2026/10/02 09:41:12 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_s;

	i = 0;
	j = 0;
	len_s = ft_strlen(src);
	if (size == 0)
		return (len_s);
	while (dest[j])
		j++;
	while (src[i] != '\0' && j + i < size - 1)
	{
		dest[i + j] = src[i];
		i++;
	}
	if (i + j < size)
		dest[i + j] = '\0';
	if (j > size)
		return (len_s + size);
	return (j + len_s);
}
/*
int	main(int argc, char **argv)
{
	if (argc < 3)
		return (0);
	printf("VALOR %ld, RESULTADO %s \n", strlcat(argv[1], argv[2],
		strlen(argv[1]) + strlen(argv[2])), argv[1]);
	return (0);
}
*/
