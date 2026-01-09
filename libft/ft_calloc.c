/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqian <zqian@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:57:48 by zqian             #+#    #+#             */
/*   Updated: 2025/11/20 15:19:36 by zqian            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dest;

	if (nmemb > 0 && size > INT_MAX / nmemb)
		return (0);
	dest = malloc(nmemb * size);
	if (!dest)
		return (dest);
	ft_bzero(dest, nmemb * size);
	return (dest);
}
