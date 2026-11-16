/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 15:54:34 by alexgonz          #+#    #+#             */
/*   Updated: 2026/10/03 14:18:09 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static size_t	count_words(char const *s1, char c)
{
	size_t	i;
	size_t	res;

	i = 0;
	res = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != c && (s1[i + 1] == '\0' || s1[i + 1] == c))
			res++;
		i++;
	}
	if (res == 0 && ft_strlen(s1) != 0)
		res++;
	return (res);
}

static char	*ft_strndup(const char *s, int n)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc((n + 1) * (sizeof(char)));
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0' && i < n)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static int	fill(char **res, size_t len, const char *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	end;

	i = 0;
	end = 0;
	while (s[end] != '\0' && i < len)
	{
		while (s[end] == c && s[end] != '\0')
			end++;
		start = end;
		while (s[end] != c && s[end] != '\0')
			end++;
		if (end > start)
		{
			res[i] = ft_strndup(&s[start], end - start);
			if (!res[i])
				return (1);
			i++;
		}
	}
	return (0);
}

void	dict_free(char **dict)
{
	int	i;

	i = 0;
	while (*dict)
		free(dict[i++]);
	free(dict);
}

char	**ft_split(char const *s, char c)
{
	size_t		len;
	char		**res;

	len = count_words(s, c);
	res = malloc(sizeof(char *) * (len + 1));
	if (!res)
		return (NULL);
	if (fill(res, len, s, c))
	{
		dict_free(res);
		return (NULL);
	}
	res[len] = malloc(1);
	if (!res[len])
		return (NULL);
	res[len] = NULL;
	return (res);
}
/*
int	main(void)
{
	char *s = "aaaa";
 	int i = 0;
 	char **result = ft_split(s, ' ');

 	while (result[i])
 	{
 		printf("%s\n", result[i]);
 		free(result[i]);
 		i++;
 	}
 	free(result);
 	return (0);
}*/
