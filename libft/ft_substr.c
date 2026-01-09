/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqian <zqian@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 18:10:09 by zqian             #+#    #+#             */
/*   Updated: 2025/11/13 11:10:19 by zqian            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	r_len;
	char	*dest;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len)
		return (ft_strdup(""));
	r_len = s_len - start;
	if (r_len > len)
		r_len = len;
	dest = malloc(sizeof(char) * (r_len + 1));
	if (!dest)
		return (dest);
	ft_memcpy(dest, s + start, r_len);
	dest[r_len] = '\0';
	return (dest);
}
