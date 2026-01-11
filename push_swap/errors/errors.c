/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 00:56:24 by migteixe          #+#    #+#             */
/*   Updated: 2026/01/11 00:56:24 by migteixe         ###   ########.fr       */
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

void	invalid_input(char *str, t_stack **a, t_stack **b)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] != ' ' && !ft_isdigit(str[i])
		 && ((str[i] != '-' || str[i] != '+') && !ft_isdigit(str[i + 1])))
			ft_error(a, b);
}

void	ft_error(t_stack **a, t_stack **b)
{
	free_stacks(a, b);
	write(2, "Error\n", 6);
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