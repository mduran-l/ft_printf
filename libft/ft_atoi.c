/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:34:17 by mduran-l          #+#    #+#             */
/*   Updated: 2024/01/08 11:36:43 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	getbegin(const char *s, int *neg)
{
	int	c;

	c = 0;
	while (s[c])
	{
		if (ft_isdigit(s[c]))
			return (c);
		if (s[c] == 45)
			*neg = -1;
		if (!(s[c] > 8 && s[c] < 14) && s[c] != 32 && s[c] != 43
			&& s[c] != 45)
			return (-1);
		if ((s[c] == 43 || s[c] == 45) && !ft_isdigit(s[c + 1]))
			return (-1);
		c ++;
	}
	return (c);
}

static int	getend(const char *s, int start)
{
	int	c;

	c = start;
	while (s[c])
	{
		if (!ft_isdigit(s[c]))
			return (c);
		c ++;
	}
	return (c);
}

/*
	The atoi() function converts the initial portion of the string pointed to
	by str to int representation.

	It is equivalent to:
		(int)strtol(str, (char **)NULL, 10);
*/
int	ft_atoi(const char *str)
{
	int	n;
	int	neg;
	int	start;
	int	i;

	n = 0;
	neg = 1;
	start = getbegin(str, &neg);
	if (start < 0)
		return (0);
	i = start;
	while (i < getend(str, start))
	{
		n *= 10;
		n += str[i] - 48;
		i ++;
	}
	return (n * neg);
}
