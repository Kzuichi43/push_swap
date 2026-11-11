/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 10:04:25 by alexgonz          #+#    #+#             */
/*   Updated: 2026/11/11 11:46:37 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	num_ops;

	num_ops = push_swap(argc, argv);
	if (num_ops == -1)
			return(write(2, "Error\n", 6));
	return (0);
}
