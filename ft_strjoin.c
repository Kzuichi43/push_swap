/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 15:07:48 by alexgonz          #+#    #+#             */
/*   Updated: 2026/10/03 10:08:32 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static void	ft_strcat(char *dest, const char *src)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
}

static void	ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len;
	char		*str;

	len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (s1 == NULL)
		ft_strcpy(str, s2);
	else if (s2 == NULL)
		ft_strcpy(str, s1);
	else
	{
		ft_strcpy(str, s1);
		ft_strcat(str, s2);
	}
	return (str);
}
/*
int	main(int argc, char **argv)
{
	if (argc < 3)
		return (0);
	argv[1] = NULL;
	char *s1 = "my favorite animal is ";
 	char *s2 = s1 + 20;
 	char *res = ft_strjoin(s2, s1);
	printf("%s \n", res);
	return (0);
}
*/
