#include "../push_swap.h"

void	atoll_error(t_stack **a, t_stack **b, char **nums, int i)
{
	if (!nums)
		return ;
	while (i >= 0)
		free(nums[i--]);
	free(nums);
	ft_error(a, b);
}

int	has_non_number(char *str)
{
	int	issignal;

	while (*str)
	{
		issignal = (*str == '+' || *str == '-');
		if (!ft_isdigit(*str) && *str != ' ' && !issignal)
			return (1);
		str++;
	}
	return (0);
}

int	has_number(char *str)
{
	while (*str)
	{
		if (ft_isdigit(*str))
			return (1);
		str++;
	}
	return (0);
}