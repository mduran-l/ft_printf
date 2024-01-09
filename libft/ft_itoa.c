/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:47:56 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/13 12:38:52 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	nbrlen(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		len ++;
	}
	return (len);
}

/*
	Utilizando malloc(3), genera una string que represente el valor entero
	recibido como argumento. Los números negativos tienen que gestionarse.
*/
char	*ft_itoa(int n)
{
	size_t	l;
	char	*output;
	int		neg;

	neg = 1;
	l = nbrlen(n);
	if (n < 0)
	{
		neg = -neg;
		l ++;
	}
	output = (char *)ft_calloc(l + 1, sizeof(char));
	if (!output)
		return (0);
	while (l --)
	{
		output[l] = 48 + neg * (n % 10);
		n /= 10;
	}
	if (neg < 0)
		output[0] = 45;
	return (output);
}
