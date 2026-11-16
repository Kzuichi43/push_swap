/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 23:04:57 by alexgonz          #+#    #+#             */
/*   Updated: 2026/10/03 09:24:04 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *to, const void *from, size_t numBytes)
{
	const unsigned char		*p_from;
	unsigned char			*p_to;
	size_t					i;

	if (to == from && to == NULL)
		return (NULL);
	p_from = (const unsigned char *)from;
	p_to = (unsigned char *)to;
	i = 0;
	while (numBytes > i)
	{
		p_to[i] = p_from[i];
		i++;
	}
	return (to);
}
/*

int	main(void)
{
	char s[10] = {'b','a','r','c','e','l','o','n','a','\0'};
	char s2[10] = {'b','a','r','c','e','l','o','n','a','\0'};

	printf("or: %s\n", s);

	ft_memcpy((void *)&s[0], (const void *)&s[3], 5);
	printf("to the begginig: %s\n", s);

	memcpy((void *)&s2[3], (const void *)&s2[0], 5);
	printf("to the back: %s\n", s2);


	return (0);
}
*/
