/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqian <zqian@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:45:54 by zqian             #+#    #+#             */
/*   Updated: 2025/11/20 14:46:06 by zqian            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_empty(char c)
{
	return (c == '	' || c == '\n' || c == '\f'
		|| c == '\r' || c == '\t' || c == '\v' || c == 32);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sens;
	int	num;

	i = 0;
	sens = 1;
	num = 0;
	while (is_empty(nptr[i]) && nptr[i])
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sens = -sens;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9' && nptr[i])
	{
		num *= 10;
		num += nptr[i] - '0';
		i++;
	}
	return (num * sens);
}
