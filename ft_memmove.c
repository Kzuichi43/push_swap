/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 10:22:56 by alexgonz          #+#    #+#             */
/*   Updated: 2026/10/03 22:39:47 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *to, const void *from, size_t numBytes)
{
	unsigned char		*t;
	const unsigned char	*f;

	t = (unsigned char *)to;
	f = (const unsigned char *)from;
	if (to == NULL && from == NULL)
		return (NULL);
	if (t > f)
	{
		while (numBytes > 0)
		{
			t[numBytes - 1] = f[numBytes - 1];
			numBytes--;
		}
	}
	else
		ft_memcpy(to, from, numBytes);
	return (t);
}
/*
int     main(void)
{
        char s[10] = {'b','a','r','c','e','l','o','n','a','\0'};
        char s2[10] = {'b','a','r','c','e','l','o','n','a','\0'};

        printf("or: %s\n", s);

        ft_memmove((void *)&s[0], (const void *)&s[3], 5);
        printf("to the begginig: %s\n", s);

        ft_memmove((void *)&s2[3], (const void *)&s2[0], 5);
        printf("to the back: %s\n", s2);


        return (0);
}
*/
