/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qian <qian@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:09:54 by zqian             #+#    #+#             */
/*   Updated: 2025/11/16 19:37:15 by qian             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l_src;
	size_t	l_dest;

	i = 0;
	l_src = 0;
	l_dest = 0;
	while (dst[l_dest])
		l_dest++;
	while (src[l_src])
		l_src++;
	if (size <= l_dest)
		return (size + l_src);
	while (src[i] && ((i + l_dest) < (size - 1)))
	{
		dst[l_dest + i] = src[i];
		i++;
	}
	dst[l_dest + i] = '\0';
	return (l_dest + l_src);
}
