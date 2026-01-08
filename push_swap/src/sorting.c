#include "../push_swap.h"

int	stack_size(t_stack *head)
{
	int		i;

	i = 0;
	while(head)
	{
		i++;
		head = head->next;
	}
	return (i);
}

void	mysort(t_stack **a, t_stack **b)
{
	t_stack	*head_a;
	t_stack	*head_b;

	head_a = *a;
	head_b = *b;
	push(a, b, 'b');
	push(a, b, 'b');
}

#include <stdio.h>
void print_stack(t_stack *head_a, t_stack *head_b) {
	t_stack *node_a = head_a;
	t_stack *node_b = head_b;

	while(node_a || node_b) {
		if(node_a) {
			printf("%d", node_a->num);
			node_a = node_a->next;
		}
		printf("\t");
		if(node_b) {
			printf("%d", node_b->num);
			node_b = node_b->next;
		}
		printf("\n");
	}
}

void array_to_stack(t_stack **stack, int *arr, int size)
{
	int		i;
	t_stack	*new;

	i = 0;
	while (i < size)
	{
		new = malloc(sizeof(t_stack));
		if (!new)
			return;
		new->num = arr[i];
		new->next = *stack;
		*stack = new;
		i++;
	}
}

int main() {
	t_stack *a = NULL;
	t_stack *b = NULL;
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	array_to_stack(&a, arr, 10);
	print_stack(a, b);
	printf("\n");
	mysort(&a, &b);
	printf("\n");
	print_stack(a, b);
}