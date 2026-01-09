/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqian <zqian@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:45:28 by zqian             #+#    #+#             */
/*   Updated: 2025/11/20 15:24:33 by zqian            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ps;
	unsigned char		pc;

	i = 0;
	ps = s;
	pc = (unsigned char)c;
	while (i < n)
	{
		if (ps[i] == pc)
			return ((void *)(ps + i));
		i++;
	}
	return (NULL);
}
