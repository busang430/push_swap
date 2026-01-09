/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqian <zqian@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:07:51 by zqian             #+#    #+#             */
/*   Updated: 2025/11/12 19:48:01 by zqian            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*p_dest;
	const char	*p_src;

	i = 0;
	p_dest = dest;
	p_src = src;
	if (!dest && !src)
		return (NULL);
	if (p_dest > p_src)
		while (n--)
			p_dest[n] = p_src[n];
	else
	{
		while (n--)
		{
			p_dest[i] = p_src[i];
			i++;
		}
	}
	return (dest);
}
