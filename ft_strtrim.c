/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 15:31:52 by alexgonz          #+#    #+#             */
/*   Updated: 2026/10/03 22:40:29 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	count_lr(char const *s1, char const *set)
{
	size_t	i;
	int		res;
	int		flag;

	i = 0;
	res = 0;
	flag = 1;
	while (s1[i] != '\0' && flag)
	{
		if (check(s1[i], set) && flag)
		{
			res++;
		}
		else if (!check(s1[i], set))
			flag = 0;
		i++;
	}
	return (res);
}

static size_t	count_rl(char const *s1, char const *set)
{
	int		i;
	int		res;
	int		flag;

	i = ft_strlen(s1) - 1;
	res = 0;
	flag = 1;
	while (i >= 0 && flag)
	{
		if (check(s1[i], set) && flag)
			res++;
		else if (!check(s1[i], set))
			flag = 0;
		i--;
	}
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		j;
	size_t		len;
	char		*str;

	i = 0;
	j = 0;
	if (ft_strlen(s1) == count_rl(s1, set))
		len = 0;
	else
		len = ft_strlen(s1) - count_rl(s1, set) - count_lr(s1, set);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (j < count_lr(s1, set))
		j++;
	while (i < len)
	{
		str[i] = s1[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	char *res = ft_strtrim(argv[1], argv[2]);
	if (!ft_strncmp(res, "", 5))
		printf("Correct");
	else if (res == 0)
		printf("FALSE");
	printf("HOLA\n");
	return (0);
}*/
