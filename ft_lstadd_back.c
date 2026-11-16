/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 17:58:38 by alexgonz          #+#    #+#             */
/*   Updated: 2026/10/02 10:02:37 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst)
	{
		if (!(*lst))
			*lst = new;
		else if (*lst && new)
		{
			if ((*lst)->next == NULL)
			{
				last = ft_lstlast(*lst);
				last->next = new;
			}
		}
	}
}
