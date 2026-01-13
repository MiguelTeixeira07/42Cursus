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

static int	has_number(const char *str)
{
	while (*str)
	{
		if (ft_isdigit((unsigned char)*str))
			return (1);
		str++;
	}
	return (0);
}

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
		if (!argv[i][0] || !has_number(argv[i]))
			ft_error(&a, &b);
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
