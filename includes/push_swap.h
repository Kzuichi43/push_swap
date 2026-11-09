/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 10:05:22 by alexgonz          #+#    #+#             */
/*   Updated: 2026/11/09 11:39:49 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

//# include "ft_printf.h"
# include "libft.h"

int	ft_check_if_num(char *str);
int	ft_valid_identifier(char *str);
size_t	ft_count_args(char **argv, int argc);
t_list	*ft_create_a(char **argv, int argc);

#endif
