/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate_rev.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-kerc <eel-kerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 15:42:22 by eel-kerc          #+#    #+#             */
/*   Updated: 2026/01/09 13:55:30 by eel-kerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Same as rotate but with loop in other sense
void	rra(t_stacks *stacks)
{
	int	i;
	int	temp;

	i = 0;
	while (i < stacks->size_a - 1)
	{
		temp = (stacks->stack_a)->value;
		(stacks->stack_a)->value = ((stacks->stack_a)->prev)->value;
		((stacks->stack_a)->prev)->value = temp;
		stacks->stack_a = (stacks->stack_a)->prev;
		i++;
	}
}

void	rrb(t_stacks *stacks)
{
	int	i;
	int	temp;

	i = 0;
	while (i < stacks->size_b - 1)
	{
		temp = (stacks->stack_b)->value;
		(stacks->stack_b)->value = ((stacks->stack_b)->prev)->value;
		((stacks->stack_b)->prev)->value = temp;
		stacks->stack_b = (stacks->stack_b)->prev;
		i++;
	}
}

void	rrr(t_stacks *stacks)
{
	rra(stacks);
	rrb(stacks);
}