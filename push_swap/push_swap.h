#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>

typedef struct node
{
	struct node *next;
	int num;
}	t_stack;



void	ft_error();

void	swap(t_stack **head);
void	swap_all(t_stack **head_a, t_stack **head_b);

void	push(t_stack **head_a, t_stack **head_b, char stack);

void	rotate(t_stack **head);
void	rotate_all(t_stack **head_a, t_stack **head_b);
void	rev_rotate(t_stack **head);
void	rev_rotate_all(t_stack **head_a, t_stack **head_b);

#endif