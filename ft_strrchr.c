/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 13:20:38 by alexgonz          #+#    #+#             */
/*   Updated: 2026/10/03 14:14:28 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	size_t			len;

	len = ft_strlen(str);
	chr %= 256;
	if (chr == 0)
		return ((char *)&str[len]);
	while (len > 0)
	{
		if (str[len - 1] == chr)
			return ((char *)&str[len - 1]);
		len--;
	}
	return (NULL);
}
