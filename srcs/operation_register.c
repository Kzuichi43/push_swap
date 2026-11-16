/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_register.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 12:07:58 by alexgonz          #+#    #+#             */
/*   Updated: 2026/11/15 16:29:18 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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
