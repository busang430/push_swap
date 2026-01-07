/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-kerc <eel-kerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 14:00:15 by eel-kerc          #+#    #+#             */
/*   Updated: 2026/01/07 15:45:51 by eel-kerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// might work but the rank is wrong because of the position change
void	pa(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*tmp_prev;
	t_stack *tmp_next;
	if (!stack_b)
		return ;
	while (stack_a->rank != 0)
		stack_a = stack_a->next;
	while (stack_b->rank != 0)
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
void	pb(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*tmp_prev;
	t_stack *tmp_next;
	if (!stack_a)
		return ;
	while (stack_b->rank != 0)
		stack_b = stack_b->next;
	while (stack_a->rank != 0)
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