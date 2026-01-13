/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 00:56:24 by migteixe          #+#    #+#             */
/*   Updated: 2026/01/12 21:44:15 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_duplicates(t_stack **a, t_stack **b)
{
	t_stack	*node;
	t_stack	*node2;

	node = *a;
	while (node)
	{
		node2 = *a;
		while (node2)
		{
			if (node->num == node2->num && node != node2)
				ft_error(a, b);
			node2 = node2->next;
		}
		node = node->next;
	}
}

static int	invalid_signal(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]) && str[i] != ' ' && str[i] != '\0')
			return (1);
		if (str[i] == ' ')
			break ;
		i++;
	}
	return (0);
}

void	invalid_input(char *str, t_stack **a, t_stack **b)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] != ' ' && !ft_isdigit(str[i])
			&& invalid_signal(str + i))
			ft_error(a, b);
}

void	ft_error(t_stack **a, t_stack **b)
{
	write(2, "Error\n", 6);
	free_stacks(a, b);
	exit(1);
}

void	free_stacks(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	t_stack	*cur;

	if (a)
	{
		cur = *a;
		while (cur)
		{
			tmp = cur->next;
			free(cur);
			cur = tmp;
		}
		*a = NULL;
	}
	if (b)
	{
		cur = *b;
		while (cur)
		{
			tmp = cur->next;
			free(cur);
			cur = tmp;
		}
		*b = NULL;
	}
}
