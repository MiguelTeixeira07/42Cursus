#include "../push_swap.h"

void	ft_error(/* t_stacks *stacks */)
{
	//ft_clean(stacks);
	write(2, "Error\n", 6);
	exit(1);
}

/* void	ft_clean(t_stacks *stacks)
{
	if (stacks)
	{
		if (stacks->a)
			free(stacks->a);
		if (stacks->b)
			free(stacks->b);
		free (stacks);
	}
} */