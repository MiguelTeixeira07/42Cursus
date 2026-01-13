/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_formatting.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 00:57:22 by migteixe          #+#    #+#             */
/*   Updated: 2026/01/12 21:44:38 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static long long	ft_atoll(char *str)
{
	long long	num;
	int			isneg;
	int			i;

	num = 0;
	isneg = 1;
	i = 0;
	while (str[i] && ft_strchr("\t\n\f\r\v ", str[i]))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		isneg *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		num = (num * 10) + (str[i] - '0');
		if ((num > INT_MAX && isneg == 1)
			|| (isneg == -1 && num > (long)INT_MAX + 1))
			return ((long)INT_MAX + 1);
		i++;
	}
	return (num * isneg);
}

static int	count_strs(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		i++;
	}
	return (i);
}

static char	*joinstrs(char **strs, int numstrs)
{
	char	*out;
	int		size;
	int		i;
	int		j;
	int		pos;

	i = 0;
	size = 0;
	while (i < numstrs)
		size += ft_strlen(strs[i++]);
	out = malloc(size + numstrs);
	if (!out)
		return (NULL);
	pos = 0;
	i = 0;
	while (i < numstrs)
	{
		j = 0;
		while (strs[i][j])
			out[pos++] = strs[i][j++];
		if (i++ != numstrs - 1)
			out[pos++] = ' ';
	}
	out[pos] = '\0';
	return (out);
}

void	input_to_list(int numstrs, char **strs, t_stack **a, t_stack **b)
{
	char	**nums;
	char	*strnums;
	long	c_num;
	int		i;
	t_stack	*new;

	strnums = joinstrs(strs, numstrs);
	invalid_input(strnums, a, b);
	nums = ft_split(strnums, ' ');
	free(strnums);
	i = count_strs(nums) - 1;
	while (i >= 0)
	{
		c_num = ft_atoll(nums[i]);
		if (c_num < INT_MIN || c_num > INT_MAX)
			ft_error(a, b);
		new = malloc(sizeof(t_stack));
		if (!new)
			return ;
		new->num = c_num;
		new->next = *a;
		*a = new;
		free(nums[i--]);
	}
	free(nums);
}
