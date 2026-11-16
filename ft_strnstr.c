/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 19:08:00 by alexgonz          #+#    #+#             */
/*   Updated: 2026/10/03 14:23:20 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (big == little || ft_strlen(little) == 0)
		return ((char *)big);
	else if (len == 0)
		return (NULL);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		if (little[j] == big[i])
		{
			while (i + j < len && little[j] == big[i + j]
				&& (big[i + j] != '\0' || little[j] != '\0'))
				j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(int argc, char **argv)
{
	if (argc < 3)
		return (0);
	if (ft_strnstr(argv[1], argv[2], 1) == 0)
		printf("ADIOS\n");
	else
		printf("%s\n", ft_strnstr(argv[1], argv[2], 20));
	return (0);
}*/
