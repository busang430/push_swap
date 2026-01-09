/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqian <zqian@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 11:42:52 by zqian             #+#    #+#             */
/*   Updated: 2025/11/20 14:43:27 by zqian            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count = 1;
	while (n != 0)
	{
		n = n / 10;
		count ++;
	}
	return (count);
}

static char	*int_min(void)
{
	char	*str;
	char	*int_min;
	int		i;

	i = 0;
	int_min = "-2147483648";
	str = malloc(ft_strlen(int_min) + 1);
	if (!str)
		return (NULL);
	while (int_min[i])
	{
		str[i] = int_min[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static void	fill_str(char *str, int n, int len, int negatif)
{
	while (len-- > 0)
	{
		if (negatif == 1 && len == 0)
			str[len] = '-';
		else
		{
			str[len] = (n % 10) + '0';
			n = n / 10;
		}
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		negatif;

	negatif = 0;
	if (n == -2147483648)
		return (int_min());
	len = count_digits(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		n = -n;
		negatif = 1;
	}
	fill_str(str, n, len, negatif);
	return (str);
}
