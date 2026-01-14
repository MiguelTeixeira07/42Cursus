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

void	invalid_input(char *str)
{
	int	i;
	int	number;
	int	invalid;
	int issignal;

	i = -1;
	number = 0;
	if (!str[0] || !has_number(str) || has_non_number(str))
		ft_error(NULL, NULL);
	while (str[++i])
	{
		issignal = (str[i] == '+' || str[i] == '-');
		invalid = (str[i] != ' ' && !ft_isdigit(str[i]));
		if (number && invalid)
			ft_error(NULL, NULL);
		if (ft_isdigit(str[i]) || issignal)
			number = 1;
		if (str[i] == ' ')
			number = 0;
	}
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
