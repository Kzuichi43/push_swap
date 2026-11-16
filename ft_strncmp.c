/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 13:32:46 by alexgonz          #+#    #+#             */
/*   Updated: 2026/10/03 09:36:00 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	if (str1[i] == '\0' && str2[i] != '\0' && i < n)
		return (-1);
	else if (str1[i] != '\0' && str2[i] == '\0' && i < n)
		return (1);
	else
		return (0);
}
/*
int	main(int argc, char **argv)
{
	if (argc < 3)
		return (0);
	printf("%d \n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	return (0);
}
*/
