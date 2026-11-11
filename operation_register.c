/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_register.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 12:07:58 by alexgonz          #+#    #+#             */
/*   Updated: 2026/11/11 15:31:57 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	operation_register(t_lector registre, t_list *a, t_list *b, char *str)
{
	if (!ft_strnmcmp(str, "sa", 2) || !ft_strncmp(str, "sb", 2) || !ft_strncmp(str, "ss", 2))
			operation_swaper(registre, a, b, str);
	else if (!ft_strncmp(str, "ra", 2) || !ft_strncmp(str, "rb", 2) || !ft_strncmp(str, "rr", 2))
			operation_rotator(registre, a, b, str);
	else if (!ft_strncmp(str, "pa", 2) || !ft_strncmp(str, "pb", 2))
			operation_putter(registre, a, b, str);
	else if (!ft_strncmp(str, "rra", 3) || !ft_strncmp(str, "rrb", 3) || !ft_strncmp(str, "rrr", 3))
			operation_reverse_rotation(registre, a, b, str);
}

t_lector	register_innit(void)
{
	t_lector	innitializer;

	innitializer.sa = 0;
	innitializer.ra = 0;
	innitializer.sb = 0;
	innitializer.rb = 0;
	innitializer.ss = 0;
	innitializer.rr = 0;
	innitializer.pa = 0;
	innitializer.rra = 0;
	innitializer.pb = 0;
	innitializer.rrb = 0;
	innitializer.rrr = 0;
	innitializer.num_ops = 0;
	return (innitializer);
}
