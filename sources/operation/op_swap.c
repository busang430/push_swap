/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-kerc <eel-kerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 13:39:00 by eel-kerc          #+#    #+#             */
/*   Updated: 2026/01/08 13:45:22 by eel-kerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

//swap of values between first and second element
void	sa(t_node *stack_a)
{
	int	tmp;
	
	if (!stack_a || stack_a == stack_a->next)
		return ;
	while (stack_a->index != 0)
		stack_a = stack_a->next;
	tmp = stack_a->value;
	stack_a->value = (stack_a->next)->value;
	(stack_a->next)->value = tmp;
}

// swap of value, that's why it's working for the ranks
void	sb(t_node *stack_b)
{
	int	tmp;
	
	if (!stack_b || stack_b == stack_b->next)
		return ;
	while (stack_b->index != 0)
		stack_b = stack_b->next;
	tmp = stack_b->value;
	stack_b->value = (stack_b->next)->value;
	(stack_b->next)->value = tmp;
}

// calling each fonction
void	ss(t_node *stack_a, t_node *stack_b)
{
	sa(stack_a);
	sb(stack_b);
}
