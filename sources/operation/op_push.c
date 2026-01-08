/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-kerc <eel-kerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 14:00:15 by eel-kerc          #+#    #+#             */
/*   Updated: 2026/01/08 13:44:14 by eel-kerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// might work but the rank is wrong because of the position change
void	pa(t_node *stack_a, t_node *stack_b)
{
	t_node	*tmp_prev;
	t_node *tmp_next;
	if (!stack_b)
		return ;
	while (stack_a->index != 0)
		stack_a = stack_a->next;
	while (stack_b->index != 0)
		stack_b = stack_b->next;
	tmp_prev = stack_b->prev;
	tmp_next = stack_b->next;
	stack_b->prev = stack_a->prev;
	stack_b->next = stack_a;
	stack_a->prev = stack_b;
	(stack_b->prev)->next = stack_b;
	tmp_prev->next = tmp_next;
	tmp_next->prev = tmp_prev;
}

// same problem, might need a third function to init rank
void	pb(t_node *stack_a, t_node *stack_b)
{
	t_node	*tmp_prev;
	t_node *tmp_next;
	if (!stack_a)
		return ;
	while (stack_b->index != 0)
		stack_b = stack_b->next;
	while (stack_a->index != 0)
		stack_a = stack_a->next;
	tmp_prev = stack_a->prev;
	tmp_next = stack_a->next;
	stack_a->prev = stack_b->prev;
	stack_a->next = stack_b;
	stack_b->prev = stack_a;
	(stack_a->prev)->next = stack_a;
	tmp_prev->next = tmp_next;
	tmp_next->prev = tmp_prev;
}