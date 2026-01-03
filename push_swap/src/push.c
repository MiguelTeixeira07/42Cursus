#include "../push_swap.h"

void	push(t_stack **head_a, t_stack **head_b, char stack)
{
	t_stack **from;
	t_stack **to;
	t_stack *temp;

	if (stack == 'a')
	{
		from = head_b;
		to = head_a;
	}
	else
	{
		from = head_a;
		to = head_b;
	}
	if (!from || !*from)
		return;
	temp = *from;
	*from = (*from)->next;
	temp->next = *to;
	*to = temp;
}

/*
#include <stdio.h>
void print_stack(t_stack *head_a, t_stack *head_b) {
	t_stack *node_a = head_a;
	t_stack *node_b = head_b;

	while(node_a || node_b) {
		 if (node_a)
            printf("%d", node_a->num);
		printf("\t");
        if (node_b)
            printf("%d", node_b->num);
        printf("\n");
        if (node_a)
            node_a = node_a->next;
        if (node_b)
            node_b = node_b->next;
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
	int arr_a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int arr_b[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

	array_to_stack(&a, arr_a, 10);
	array_to_stack(&b, arr_b, 10);
	print_stack(a, b);
	printf("\n");
	push(&a, &b, 'a');
	print_stack(a, b);
	printf("\n");
	push(&a, &b, 'b');
	push(&a, &b, 'b');
	print_stack(a, b);
}*/