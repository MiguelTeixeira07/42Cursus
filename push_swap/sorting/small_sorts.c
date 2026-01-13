/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sorts.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 19:25:20 by migteixe          #+#    #+#             */
/*   Updated: 2026/01/13 19:26:43 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static t_stack	*find_min(t_stack *a)
{
	t_stack	*min;

	min = a;
	while (a)
	{
		if (a->num < min->num)
			min = a;
		a = a->next;
	}
	return (min);
}

static t_stack	*find_target(t_stack *a, int b)
{
	t_stack	*best;

	best = NULL;
	while (a)
	{
		if (a->num > b && (!best || a->num < best->num))
			best = a;
		a = a->next;
	}
	return (best);
}

static void	rotate_to_top(t_stack **a, t_stack *target)
{
	int		i;
	int		size;
	t_stack	*tmp;

	i = 0;
	size = stack_size(*a);
	tmp = *a;
	while (tmp && tmp != target)
	{
		i++;
		tmp = tmp->next;
	}
	while (*a != target)
	{
		if (i <= size / 2)
			operator(a, NULL, "ra");
		else
			operator(a, NULL, "rra");
	}
}

static void	reintegrate(t_stack **a, t_stack **b)
{
	t_stack	*target;

	while (*b)
	{
		target = find_target(*a, (*b)->num);
		if (!target)
			target = find_min(*a);
		rotate_to_top(a, target);
		operator(a, b, "pa");
	}
	rotate_to_top(a, find_min(*a));
}

void	small_sort(t_stack **a, t_stack **b)
{
	t_stack	*node_a;
	t_stack	*node_b;
	t_stack	*target;

	node_a = *a;
	node_b = *b;
	while (stack_size(*a) > 3)
		operator(a, b, "pb");
	sort3(a);
	while (*b)
	{
		target = find_target(*a, (*b)->num);
		if (!target)
			target = find_min(*a);
		rotate_to_top(a, target);
		operator(a, b, "pa");
	}
	rotate_to_top(a, find_min(*a));
}
