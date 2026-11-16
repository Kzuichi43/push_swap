/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 14:47:23 by alexgonz          #+#    #+#             */
/*   Updated: 2026/10/02 13:44:02 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	size_t	rem;

	if (len == 0 || start >= (unsigned int)ft_strlen(s))
		return (ft_calloc(1, 1));
	rem = ft_strlen((char *)s) - start;
	if (rem < len)
		len = rem;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(int argc, char **argv)
{
	if (argc < 3)
		return (0);
	printf("%s \n", ft_substr(argv[1], atoi(argv[2]), atoi(argv[3])));
	return (0);
}*/
