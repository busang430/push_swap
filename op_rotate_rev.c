/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate_rev.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-kerc <eel-kerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 15:42:22 by eel-kerc          #+#    #+#             */
/*   Updated: 2026/01/07 16:13:31 by eel-kerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// Same as rotate but with loop in other sense

void	ra(t_stack *stack_a)
{
	int	tmp;
	
	if (!stack_a)
		return ;
	while (stack_a->rank != 0)
		stack_a = stack_a->next;
	while ((stack_a->next)->rank != 0)
	{	
		tmp = stack_a->value;
		stack_a->value = (stack_a->next)->value;
		(stack_a->next)->value = tmp;
		
	}
}