
#include "../../includes/push_swap.h"

static void	free_stack_list(t_node **stack)
{
	t_node	*current;
	t_node	*next;

	if (!stack || !*stack)
		return ;
	current = *stack;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*stack = NULL;
}

void	free_stacks(t_stacks *stacks)
{
	if (!stacks)
		return ;
	free_stack_list(&stacks->stack_a);
	free_stack_list(&stacks->stack_b);
	stacks->size_a = 0;
	stacks->size_b = 0;
}

void	error_exit(t_stacks *stacks)
{
	free_stacks(stacks);
	ft_putstr_fd("Error\n", 2);
	exit(1);
}
