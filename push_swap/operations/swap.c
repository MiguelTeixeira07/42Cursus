/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 00:56:58 by migteixe          #+#    #+#             */
/*   Updated: 2026/01/12 16:00:01 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_stack **head)
{
	t_stack	*temp;

	if (!head || !*head || !(*head)->next)
		return ;
	temp = *head;
	*head = (*head)->next;
	temp->next = (*head)->next;
	(*head)->next = temp;
}

void	swap_all(t_stack **head_a, t_stack **head_b)
{
	swap(head_a);
	swap(head_b);
}

/*
#include <stdio.h>
void print_stack(t_stack *head_a, t_stack *head_b) {
	t_stack *node_a = head_a;
	t_stack *node_b = head_b;

	while(node_a && node_b) {
		printf("%d\t%d\n", node_a->num, node_b->num);
		node_a = node_a->next;
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
	ss(&a, &b);
	print_stack(a, b);
}*/