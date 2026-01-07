/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disorder.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-kerc <eel-kerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 12:50:35 by eel-kerc          #+#    #+#             */
/*   Updated: 2026/01/07 15:48:33 by eel-kerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// calculate disorder by checking if each pair is in the right order
float	disorder(t_stack *stack_a)
{
	t_stack	*first;
	t_stack	*second;
	int	mistake;

	first = stack_a;
	second = stack_a->next;
	mistake = 0;
	while (second->rank != 0)
	{
		if (first->value > second->value)
			mistake++;
		first = first->next;
		second = second->next;
	}
	if (first->rank == second->rank)
		return (0);
	return (mistake / (first->rank));
}
