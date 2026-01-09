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

	i = bits_needed(stack_size(*a)) - 1;
	while (i >= 0 && !ft_checksorted(*a))
	{
		size = stack_size(*a);
		j = 0;
		while (j < size)
		{
			if (((*a)->bin >> i) & 1)
				operator(a, b, "pb");
			else
				operator(a, b, "ra");
			j++;
		}
		while (*b)
			operator(a, b, "pa");
		i--;
	}
}
