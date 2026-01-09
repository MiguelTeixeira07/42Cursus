#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>
# include <stdio.h>

typedef struct node
{
	struct node	*next;
	int			num;
	int			bin;
}	t_stack;


// inputs
void	input_to_list(int numstrs, char **strs, t_stack **stack);

// error managing
void	ft_error();

// operations
void	operator(t_stack **head_a, t_stack **head_b, char *op);
void	swap(t_stack **head);									// sa | sb
void	swap_all(t_stack **head_a, t_stack **head_b);			// ss
void	push(t_stack **head_a, t_stack **head_b, char stack);	// pa | pb
void	rotate(t_stack **head);									// ra | rb
void	rotate_all(t_stack **head_a, t_stack **head_b);			// rr
void	rev_rotate(t_stack **head);								// rra | rrb
void	rev_rotate_all(t_stack **head_a, t_stack **head_b);		// rrr

// sorting
void	sort(t_stack **a, t_stack **b);

// utils
int		*list_to_arr(t_stack *stack);
int		*index_sort(t_stack *list);
int		stack_size(t_stack *head);
int		ft_checksorted(t_stack *stack);
char	*bin(int n);
void	list_to_bin(int *arr, t_stack *list);

// debugging
void	print_stack(t_stack *head_a, t_stack *head_b);

#endif