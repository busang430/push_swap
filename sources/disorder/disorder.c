/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disorder.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqian <zqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 12:50:35 by eel-kerc          #+#    #+#             */
/*   Updated: 2026/01/09 16:14:09 by zqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// calculate disorder by checking if each pair is in the right order
float	disorder(t_node *stack_a)
{
	t_node	*first;
	t_node	*second;
	int		mistake;

	first = stack_a;
	second = stack_a->next;
	mistake = 0;
	while (second->index != 0)
	{
		if (first->value > second->value)
			mistake++;
		first = first->next;
		second = second->next;
	}
	if (first->index == second->index)
		return (0);
	return (mistake / (first->index));
}
