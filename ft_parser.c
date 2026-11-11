/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 10:06:32 by alexgonz          #+#    #+#             */
/*   Updated: 2026/11/10 15:05:43 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_if_num(char *str)
{
	size_t	i;

	i = 0;
	if (ft_strlen(str) >= 12)
			return (-1);
	while (str[i] != '\0')
	{
		if (str[i] == '-' && i == 0)
				i += 1;
		if (str[i] > '9' || str[i] < '0')
				return (-1);
		i++;
	}
	if ((long)ft_atoi(str) > 2147483647 || (long)ft_atoi(str) < -2147483648)
			return (-1);
	return (1);
}

int	ft_valid_identifier(char *str)
{
	if (!ft_strncmp(str, "--simple", ft_strlen(str)))
			return (1);
	else if (!ft_strncmp(str, "--medium", ft_strlen(str)))
			return(1);
	else if (!ft_strncmp(str, "--complex", ft_strlen(str)))
			return (1);
	else if (!ft_strncmp(str, "--adaptative", ft_strlen(str)))
			return (1);
	else if (!ft_strncmp(str, "--bench", ft_strlen(str)))
			return (1);
	else
			return (-1);
}

size_t	ft_count_args(char **argv, int argc)
{
	int	i;
	int	len;

	i = 1;
	len = 0;
	while (i < argc && ft_valid_identifier(argv[1]) != -1)
	{
		if (ft_check_if_num(argv[i]) == 1)
			len++;
		i++;
	}
	return (len);
}


t_list	*ft_create_a(char **argv, int argc)
{
	t_list	*head = NULL;
	t_list	*actual;
	int	i = 0;

	i = 0;
	while (i < argc)
	{
		if (ft_check_if_num(argv[i]) != -1)
		{
			if (!head)
			{
				head = ft_lstnew((int)ft_atoi(argv[i]));
				actual = head;
				if (!head)
					return (NULL);
			}
			else
			{
				actual = ft_insert_at_last(actual, (int)ft_atoi(argv[i]));
				if (!actual)
				{
					error_free_stack(head);
					return (NULL);
				}
			}
		}
		i++;
	}
	return (head);
}

t_list	*ft_insert_at_last(t_list *last, int data)
{
	t_list	*newnode;

	newnode = malloc(sizeof(t_list));
	if (!newnode)
		return (NULL);
	newnode->content = data;
	if (!last)
	{
		last = newnode;
		last->next = NULL;
	}
	else
	{
		last->next = newnode;
		newnode->next = NULL;
		last = newnode;
	}
	return (last);
}
