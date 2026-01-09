/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqian <zqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 13:39:00 by eel-kerc          #+#    #+#             */
/*   Updated: 2026/01/09 16:16:01 by zqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

//swap of values between first and second element
void	sa(t_stacks *stacks)
{
	int	tmp;

	if (!stacks->stack_a || stacks->stack_a == (stacks->stack_a)->next)
		return ;
	while (stacks->index_a % stacks->size_a != 0)
	{
		stacks->stack_a = (stacks->stack_a)->prev;
		stacks->index_a--;
	}
	tmp = (stacks->stack_a)->value;
	(stacks->stack_a)->value = ((stacks->stack_a)->next)->value;
	((stacks->stack_a)->next)->value = tmp;
}

// swap of value, that's why it's working for the ranks
void	sb(t_stacks *stacks)
{
	int	tmp;

	if (!stacks->stack_b || stacks->stack_b == (stacks->stack_b)->next)
		return ;
	while (stacks->index_b % stacks->size_b != 0)
	{
		stacks->stack_b = (stacks->stack_b)->prev;
		stacks->index_b--;
	}
	tmp = (stacks->stack_b)->value;
	(stacks->stack_b)->value = ((stacks->stack_b)->next)->value;
	((stacks->stack_b)->next)->value = tmp;
}

// calling each fonction
void	ss(t_stacks *stacks)
{
	sa(stacks);
	sb(stacks);
}
