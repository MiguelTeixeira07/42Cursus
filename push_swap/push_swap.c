/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 00:57:33 by migteixe          #+#    #+#             */
/*   Updated: 2026/01/13 17:32:03 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		*arr;
	int		i;
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	i = 0;
	if (argc == 1)
		exit(0);
	while (++i < argc)
		invalid_input(argv[i]);
	input_to_list(argc - 1, argv + 1, &a, &b);
	check_duplicates(&a, &b);
	if (ft_checksorted(a))
	{
		free_stacks(&a, &b);
		exit(0);
	}
	arr = index_sort(a);
	list_to_bin(arr, a);
	sort(&a, &b);
	free_stacks(&a, &b);
}
