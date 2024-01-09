/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:25:31 by mduran-l          #+#    #+#             */
/*   Updated: 2023/11/28 14:06:53 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

int	ft_islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

/*
	The isalpha() function tests for any character for which isupper(3) or
	islower(3) is true. The value of the argument must be representable as
	an unsigned char or the value of EOF.

	The isalpha() function returns zero if the character tests false and
	returns non-zero if the character tests true.
*/
int	ft_isalpha(int c)
{
	return (ft_isupper(c) + ft_islower(c));
}
