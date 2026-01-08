
#include "../../includes/push_swap.h"

t_node	*create_node(int value)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->value = value;
	node->index = 0;
	node->prev = NULL;
	node->next = NULL;
	return (node);
}

void	add_node_to_stack_a(t_stacks *stacks, t_node *node)
{
	t_node	*current;

	if (!stacks || !node)
		return ;
	if (!stacks->stack_a)
	{
		stacks->stack_a = node;
		node->prev = NULL;
		node->next = NULL;
	}
	else
	{
		current = stacks->stack_a;
		while (current->next)
			current = current->next;
		current->next = node;
		node->prev = current;
		node->next = NULL;
	}
	stacks->size_a++;
}

int	check_double(t_stacks *stacks)
{
	t_node	*current;
	t_node	*compare;

	if (!stacks || !stacks->stack_a)
		return (0);
	current = stacks->stack_a;
	while (current)
	{
		compare = current->next;
		while (compare)
		{
			if (current->value == compare->value)
				return (1);
			compare = compare->next;
		}
		current = current->next;
	}
	return (0);
}

void	calculate_indexes(t_stacks *stacks)
{
	t_node	*current;
	t_node	*compare;
	int		index;

	if (!stacks || !stacks->stack_a)
		return ;
	current = stacks->stack_a;
	while (current)
	{
		index = 0;
		compare = stacks->stack_a;
		while (compare)
		{
			if (compare->value < current->value)
				index++;
			compare = compare->next;
		}
		current->index = index;
		current = current->next;
	}
}
