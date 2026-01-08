/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqian <zqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 10:38:51 by zqian             #+#    #+#             */
/*   Updated: 2026/01/08 10:38:54 by zqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	print_stack(t_stacks *stacks)
{
	t_node	*current;

	ft_putstr_fd("Stack A: ", 1);
	current = stacks->stack_a;
	ft_putstr_fd("\n", 1);
	while (current)
	{
		ft_putstr_fd("value=", 1);
		ft_putnbr_fd(current->value, 1);
		ft_putstr_fd(" index=", 1);
		ft_putnbr_fd(current->index, 1);
		if (current->next)
			ft_putstr_fd(" -> ", 1);
		current = current->next;
		ft_putstr_fd("\n", 1);
	}
	ft_putstr_fd("\n", 1);
}

int	main(int argc, char **argv)
{
	t_stacks	stacks;

	stacks.stack_a = NULL;
	stacks.stack_b = NULL;
	stacks.size_a = 0;
	stacks.size_b = 0;
	if (argc < 2)
		return (0);
	if (!parse_args(&stacks, argc, argv))
		error_exit(&stacks);
	print_stack(&stacks);
	free_stacks(&stacks);
	return (0);
}
