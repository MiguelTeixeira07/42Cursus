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

void	sort3(t_stack **a)
{
	int	x;
	int	y;
	int	z;

	x = (*a)->num;
	y = (*a)->next->num;
	z = (*a)->next->next->num;
	if (x > y && y < z && x < z)
		operator(a, NULL, "sa");
	else if (x > y && y > z)
	{
		operator(a, NULL, "sa");
		operator(a, NULL, "rra");
	}
	else if (x > y && y < z && x > z)
		operator(a, NULL, "ra");
	else if (x < y && y > z && x < z)
	{
		operator(a, NULL, "sa");
		operator(a, NULL, "ra");
	}
	else if (x < y && y > z && x > z)
		operator(a, NULL, "rra");
}
