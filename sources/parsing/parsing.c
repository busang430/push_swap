/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqian <zqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 10:39:08 by zqian             #+#    #+#             */
/*   Updated: 2026/01/08 10:39:11 by zqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	is_valid_number(const char *str)
{
	int	i;

	i = 0;
	if (!str || !str[0])
		return (0);
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	fill_stack_a(t_stacks *stacks, char **args)
{
	int		i;
	int		value;
	t_node	*node;

	i = 0;
	while (args[i])
	{
		if (!is_valid_number(args[i]))
			return (0);
		value = ft_atoi(args[i]);
		node = create_node(value);
		if (!node)
			return (0);
		add_node_to_stack_a(stacks, node);
		i++;
	}
	if (check_double(stacks))
		return (0);
	calculate_indexes(stacks);
	return (1);
}

int	parse_args(t_stacks *stacks, int argc, char **argv)
{
	(void)argc;
	return (fill_stack_a(stacks, &argv[1]));
}
