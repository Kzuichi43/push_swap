/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 13:01:14 by alexgonz          #+#    #+#             */
/*   Updated: 2026/10/02 11:14:58 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	size_t		i;

	i = 0;
	if (ch == 0)
		return ((char *)&str[ft_strlen(str)]);
	while (str[i] != '\0')
	{
		if (str[i] == (char)ch)
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}
/*
int	main(int argc, char **argv)
{
	if (argc < 3)
		return (0);
	printf("%s \n", ft_strchr(argv[1], argv[2][0]));
	return (0);
}*/
