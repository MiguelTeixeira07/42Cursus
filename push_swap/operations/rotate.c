#include "../push_swap.h"

void	rotate(t_stack **head)
{
	t_stack	**node;
	t_stack	*temp;

	node = head;
	while ((*node)->next)
	{
		temp = *node;
		*node = (*node)->next;
		temp->next = (*node)->next;
		(*node)->next = temp;
		node = &(*node)->next;
	}
}

void	rotate_all(t_stack **head_a, t_stack **head_b)
{
	rotate(head_a);
	rotate(head_b);
}

void	rev_rotate(t_stack **head)
{
	t_stack	*node;
	t_stack	*temp;

	node = *head;
	while (node->next)
	{
		if (!node->next->next)
			temp = node;
		node = node->next;
	}
	node->next = *head;
	temp->next = NULL;
	*head = node;
}

void	rev_rotate_all(t_stack **head_a, t_stack **head_b)
{
	rev_rotate(head_a);
	rev_rotate(head_b);
}

/*
#include <stdio.h>
void print_stack(t_stack *head_a) {
	t_stack *node_a = head_a;
	//t_stack *node_b = head_b;

	while(node_a) {
		printf("%d\n", node_a->num);
		node_a = node_a->next;
		//node_b = node_b->next;
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
	//t_stack *b = NULL;
	int arr_a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	//int arr_b[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

	array_to_stack(&a, arr_a, 10);
	//array_to_stack(&b, arr_b, 10);
	print_stack(a);
	printf("\n");
	rev_rotate(&a);
	print_stack(a);
}*/