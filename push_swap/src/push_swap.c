#include "push_swap.h"

int	count_strs(char **strs)
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

	if (numstrs == 1)
	{
		nums = ft_split(*strs);
		numstrs = count_strs(nums);
		return (input_to_list(numstrs, nums, stack));
	}
	while ()
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	int		i;

	a = NULL;
	input_to_list(argc - 1, argv + 1, &a);
}