#include "../push_swap.h"

static long long	ft_atoll(char *str)
{
	long long	num;
	int	isneg;
	int	i;

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

void	input_to_list(int numstrs, char **strs, t_stack **stack)
{
	char	**nums;
	int		i;
	int		c_num;
	t_stack	*new;

	i = numstrs - 1;
	nums = strs;
	if (numstrs == 1)
	{
		nums = ft_split(*strs, ' ');
		numstrs = count_strs(nums);
		return (input_to_list(numstrs, nums, stack));
	}
	while (i >= 0)
	{
		c_num = ft_atoll(nums[i--]);
		if (c_num < INT_MIN && c_num > INT_MAX)
			ft_error();
		new = malloc(sizeof(t_stack));
		if (!new)
			return;
		new->num = c_num;
		new->next = *stack;
		*stack = new;
	}
}