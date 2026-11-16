/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 11:30:33 by alexgonz          #+#    #+#             */
/*   Updated: 2026/10/03 12:29:11 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		write(fd, &s[i++], 1);
	write(fd, "\n", 1);
}
/*
int     main(int argc, char **argv)
{
        int     fd;

        if (argc < 3)
                return (0);
        fd = open(argv[1], O_RDONLY || O_WRONLY);
        ft_putstr_fd(argv[2], fd);
        close(fd);
        return (0);
}*/
