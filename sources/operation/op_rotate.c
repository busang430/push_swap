/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqian <zqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 15:42:19 by eel-kerc          #+#    #+#             */
/*   Updated: 2026/01/09 16:15:38 by zqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

//I might do a while rank != 0, and do a swap call each time because 
//we only need to modify values
void	ra(t_stacks *stacks)
{
	int	i;
	int	temp;

	i = 0;
	while (i < stacks->size_a - 1)
	{
		temp = (stacks->stack_a)->value;
		(stacks->stack_a)->value = ((stacks->stack_a)->next)->value;
		((stacks->stack_a)->next)->value = temp;
		stacks->stack_a = (stacks->stack_a)->next;
		i++;
	}
}

void	rb(t_stacks *stacks)
{
	int	i;
	int	temp;

	i = 0;
	while (i < stacks->size_b - 1)
	{
		temp = (stacks->stack_b)->value;
		(stacks->stack_b)->value = ((stacks->stack_b)->next)->value;
		((stacks->stack_b)->next)->value = temp;
		stacks->stack_b = (stacks->stack_b)->next;
		i++;
	}
}

void	rr(t_stacks *stacks)
{
	ra(stacks);
	rb(stacks);
}
