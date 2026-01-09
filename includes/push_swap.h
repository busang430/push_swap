/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqian <zqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 10:38:28 by zqian             #+#    #+#             */
/*   Updated: 2026/01/09 12:01:08 by zqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <limits.h>

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

typedef struct s_stacks
{
	t_node	*stack_a;
	t_node	*stack_b;
	int		index_a;
	int		index_b;
	int		size_a;
	int		size_b;
}	t_stacks;

void		error_exit(t_stacks *stacks);
void		free_stacks(t_stacks *stacks);

int			parse_args(t_stacks *stacks, int argc, char **argv);
int			fill_stack_a(t_stacks *stacks, char **args);

int			is_valid_number(const char *str);
int			check_double(t_stacks *stacks);

t_node		*create_node(int value);
void		add_node_to_stack_a(t_stacks *stacks, t_node *node);
void		calculate_indexes(t_stacks *stacks);

#endif
