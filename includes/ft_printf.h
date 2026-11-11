/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 10:15:01 by alexgonz          #+#    #+#             */
/*   Updated: 2026/11/10 18:50:46 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include "libft.h"

int	print_char(int c);
int	print_str(char *str);
int	ft_printf(const char *str, ...);
int	print_hex(int nbr, int flag);
int	print_num(int nbr);
int	print_unum(unsigned int nbr);
int	print_void(void *ptr);
int	print_float(double num);

#endif
