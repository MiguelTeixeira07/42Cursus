#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		*arr;
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	input_to_list(argc - 1, argv + 1, &a);
	arr = index_sort(a);
	list_to_bin(arr, a);
	sort(&a, &b);
	//print_stack(a, b);
}