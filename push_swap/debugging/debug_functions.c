/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 00:56:09 by migteixe          #+#    #+#             */
/*   Updated: 2026/01/11 00:56:09 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

void print_stack(t_stack *head_a, t_stack *head_b) {
	t_stack *node_a = head_a;
	t_stack *node_b = head_b;

	while(node_a || node_b) {
		if(node_a) {
			printf("%d %d", node_a->num, node_a->bin);
			node_a = node_a->next;
		}
		printf("\t");
		if(node_b) {
			printf("%d %d", node_b->num, node_b->bin);
			node_b = node_b->next;
		}
		printf("\n");
	}
}