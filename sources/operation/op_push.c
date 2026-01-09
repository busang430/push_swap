/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-kerc <eel-kerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 14:00:15 by eel-kerc          #+#    #+#             */
/*   Updated: 2026/01/09 14:06:44 by eel-kerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// might work but the rank is wrong because of the position change
void	pa(t_stacks *stacks)
{
	t_node	*tmp_prev;
	t_node *tmp_next;
	if (!stacks->stack_b)
		return ;
	while (stacks->index_a % stacks->size_a != 0)
	{
		stacks->stack_a = (stacks->stack_a)->prev;
		stacks->index_a--;
	}
	while (stacks->index_b % stacks->size_b != 0)
	{
		stacks->stack_b = (stacks->stack_b)->prev;
		stacks->index_b--;
	}
	tmp_prev = (stacks->stack_b)->prev;
	tmp_next = (stacks->stack_b)->next;
	(stacks->stack_b)->prev = (stacks->stack_a)->prev;
	(stacks->stack_b)->next = stacks->stack_a;
	(stacks->stack_a)->prev = stacks->stack_b;
	((stacks->stack_b)->prev)->next = stacks->stack_b;
	tmp_prev->next = tmp_next;
	tmp_next->prev = tmp_prev; 
}

// same problem, might need a third function to init rank
void	pb(t_stacks *stacks)
{
	t_node	*tmp_prev;
	t_node *tmp_next;
	if (!stacks->stack_a)
		return ;
	while (stacks->index_b % stacks->size_b != 0)
	{
		stacks->stack_b = (stacks->stack_b)->prev;
		stacks->index_b--;
	}
	while (stacks->index_a % stacks->size_a != 0)
	{
		stacks->stack_a = (stacks->stack_a)->prev;
		stacks->index_a--;
	}
	tmp_prev = (stacks->stack_a)->prev;
	tmp_next = (stacks->stack_a)->next;
	(stacks->stack_a)->prev = (stacks->stack_b)->prev;
	(stacks->stack_a)->next = stacks->stack_b;
	(stacks->stack_b)->prev = stacks->stack_a;
	((stacks->stack_a)->prev)->next = stacks->stack_a;
	tmp_prev->next = tmp_next;
	tmp_next->prev = tmp_prev; 
}