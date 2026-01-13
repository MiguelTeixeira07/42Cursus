/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 00:57:18 by migteixe          #+#    #+#             */
/*   Updated: 2026/01/13 18:06:26 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	bits_needed(unsigned int n)
{
	int	bits;

	if (n == 0)
		return (1);
	bits = 0;
	while (n)
	{
		n >>= 1;
		bits++;
	}
	return (bits);
}

void	sort(t_stack **a, t_stack **b)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	if (stack_size(*a) <= 5)
		small_sort(a, b);
	if (!ft_checksorted(*a))
	{
		while (i < bits_needed(stack_size(*a) - 1))
		{
			size = stack_size(*a);
			j = 0;
			while (j++ < size)
			{
				if (((*a)->bin >> i) & 1)
					operator(a, b, "ra");
				else
					operator(a, b, "pb");
			}
			while (*b)
				operator(a, b, "pa");
			i++;
		}
	}
}
