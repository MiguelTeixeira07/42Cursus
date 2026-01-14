/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 19:26:54 by migteixe          #+#    #+#             */
/*   Updated: 2026/01/13 19:27:34 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	swap_rotate(t_stack **a)
{
	operator(a, NULL, "sa");
	operator(a, NULL, "ra");
}

void	sort3(t_stack **a)
{
	int	x;
	int	y;
	int	z;

	if (stack_size(*a) == 2)
	{
		if ((*a)->num > (*a)->next->num)
			operator(a, NULL, "sa");
		return ;
	}
	x = (*a)->num;
	y = (*a)->next->num;
	z = (*a)->next->next->num;
	if (x > y && x < z)
		operator(a, NULL, "sa");
	else if (x > y && y > z)
	{
		operator(a, NULL, "sa");
		operator(a, NULL, "rra");
	}
	else if (x > z)
		operator(a, NULL, "ra");
	else if (y > z)
		swap_rotate(a);
}
