/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqian <zqian@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 09:37:31 by zqian             #+#    #+#             */
/*   Updated: 2026/01/07 10:29:03 by zqian            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// stack which contain value
typedef struct s_stack
{
	int				value;
	int				rank;
	struct s_stack	*prev;
	struct s_stack	*next;
}	t_stack;

#endif
