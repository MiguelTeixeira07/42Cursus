/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 00:56:45 by migteixe          #+#    #+#             */
/*   Updated: 2026/01/11 00:56:45 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (unsigned char)*s1 - (unsigned char)*s2;
		s1++;
		s2++;
	}
	return (unsigned char)*s1 - (unsigned char)*s2;
}

void	operator(t_stack **a, t_stack **b, char *op)
{
	ft_putendl_fd(op, 1);
	if (!ft_strcmp(op, "sa"))
		swap(a);
	if (!ft_strcmp(op, "sb"))
		swap(b);
	if (!ft_strcmp(op, "ss"))
		swap_all(a, b);
	if (!ft_strcmp(op, "pa"))
		push(a, b, 'a');
	if (!ft_strcmp(op, "pb"))
		push(a, b, 'b');
	if (!ft_strcmp(op, "ra"))
		rotate(a);
	if (!ft_strcmp(op, "rb"))
		rotate(b);
	if (!ft_strcmp(op, "rr"))
		rotate_all(a, b);
	if (!ft_strcmp(op, "rra"))
		rev_rotate(a);
	if (!ft_strcmp(op, "rrb"))
		rev_rotate(b);
	if (!ft_strcmp(op, "rrr"))
		rev_rotate_all(a, b);
}