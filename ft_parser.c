/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 10:06:32 by alexgonz          #+#    #+#             */
/*   Updated: 2026/11/09 11:46:46 by alexgonz         ###   ########.fr       */
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
		if (str[i] > '9' && str[i] < '0')
				return (-1);
		i++;
	}
	if ((long)ft_atoi(str) > 2147483647 || (long)ft_atoi(str) < -2147483648)
			return (-1);
	return (1);
}

int	ft_valid_identifier(char *str)
{
	if (!ft_strncmp(str, "--simple", 9))
			return (-1);
	else if (!ft_strncmp(str, "--medium", 9))
			return(-1);
	else if (!ft_strncmp(str, "--complex", 9))
			return (-1);
	else if (!ft_strncmp(str, "--adaptative", 13))
			return (-1);
	else if (!ft_strncmp(str, "--bench", 8))
			return (-1);
	else
			return (1);
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
	t_list	*head;
	t_list	*actual;
	int	i;

	i = 0;
	while (i < argc)
	{
		if (ft_check_if_num(argv[i]) != -1)
		{
			if (!head)
			{
				head = ft_lstnew(ft_atoi(argv[i]));
				if (!head)
						return (NULL);
			}
			else
			{
				actual = ft_lstnew(ft_atoi(argv[i]));
				//if (!actual)
				//		return (ft_lstclear(**head, lst_del));
				ft_lstadd_back(&head, actual);
			}
		}
		i++;
	}
	return (head);
}

//FIRST TRY WITH BRUTEFORCE
/*t_list	*ft_create_a(char **argv, int argc)
{
	size_t	i;
	t_node	**a;
	t_node	*temp;

	i = 0;
	if (argc < 3)
			return (NULL);
	a = malloc(sizeof(t_node *) * ft_count_args(argv, argc));
	if (!a)
		return (NULL);
	temp = malloc(sizeof(t_node));
	if (!temp)
	{
		free(a);
		return (NULL);
	}
	while (ft_check_if_num(argv[i]) != -1 && ft_valid_identifier(argv[i]) != -1)
	{
		if (ft_check_if_num(argv[i]) == 1)
		{
			*a = malloc(sizeof(t_node));
			if (!*a)
				return (ft_free_list(a));
			temp->content = ft_atoi(argv[1]);
			temp->next = NULL;
			if ()
		}
	}
}*/
