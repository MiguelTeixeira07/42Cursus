/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 00:57:12 by migteixe          #+#    #+#             */
/*   Updated: 2026/01/11 00:57:12 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	*to_index(int *arr, int *sorted, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (arr[i] == sorted[j])
			{
				arr[i] = j;
				break;
			}
			j++;
		}
		i++;
	}
	return arr;
}

int	*index_sort(t_stack *list)
{
	int	i;
	int	j;
	int	temp;
	int	size;
	int	*arr;
	int	*sorted;

	size = stack_size(list);
	arr = list_to_arr(list);
	sorted = list_to_arr(list);
	i = 0;
	while (i + 1 < size)
	{
		if (sorted[i] > sorted[i + 1])
		{
			temp = sorted[i];
			sorted[i] = sorted[i + 1];
			sorted[i + 1] = temp;
			i = -1;
		}
		i++;
	}
	arr = to_index(arr, sorted, size);
	free(sorted);
	return arr;
}