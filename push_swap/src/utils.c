/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 00:57:28 by migteixe          #+#    #+#             */
/*   Updated: 2026/01/11 00:57:28 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*list_to_arr(t_stack *stack)
{
	int	*arr;
	int	i;

	arr = malloc(stack_size(stack) * sizeof(int));
	if (!arr)
		return (NULL);
	i = 0;
	while (stack)
	{
		arr[i] = stack->num;
		stack = stack->next;
		i++;
	}
	return (arr);
}

char	*bin(int n)
{
	char			*bin;
	int				i;
	unsigned int	num;

	bin = (char *)malloc(33);
	if (!bin)
		return (NULL);
	num = (unsigned int)n;
	i = 31;
	while (i >= 0)
	{
		bin[i] = (num % 2) + '0';
		num /= 2;
		i--;
	}
	bin[32] = '\0';
	return (bin);
}

int	stack_size(t_stack *head)
{
	int		i;

	i = 0;
	while(head)
	{
		i++;
		head = head->next;
	}
	return (i);
}

int	ft_checksorted(t_stack *stack)
{
	int	i;

	i = stack->num;
	while (stack)
	{
		if (i > stack->num)
			return (0);
		i = stack->num;
		stack = stack->next;
	}
	return (1);
}

void	list_to_bin(int *arr, t_stack *list)
{
	t_stack	*node;
	int	i;

	node = list;
	i = 0;
	while(i < stack_size(list))
	{
		node->bin = arr[i];
		node = node->next;
		i++;
	}
	free(arr);
}