#include "../push_swap.h"

static int	*to_index(int *arr, t_stack *list)
{
	t_stack	*head;
	int	i;
	int	j;

	i = 0;
	j = 0;
	head = list;
	while (i < stack_size(head))
	{
		j = 0;
		list = head;
		while (list && list->num != arr[i])
		{
			j++;
			list = list->next;
		}
		arr[i] = list->num;
		i++;
	}
	return (arr);
}

int	*index_sort(t_stack *list)
{
	int	i;
	int	j;
	int	temp;
	int	*arr;

	arr = list_to_arr(list);
	i = 0;
	while (i + 1 < stack_size(list))
	{
		if (arr[i] > arr[i + 1])
		{
			temp = arr[i + 1];
			arr[i + 1] = arr[i];
			arr[i] = temp;
			i = -1;
		}
		i++;
	}
	arr = to_index(arr, list);
	return (arr);
}