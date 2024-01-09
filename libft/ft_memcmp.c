/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:51:08 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/05 11:53:39 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	The memcmp() function compares byte string s1 against byte string s2.
	Both strings are assumed to be n bytes long.

	The memcmp() function returns zero if the two strings are identical, other-
	wise returns the difference between the first two differing bytes (treated
	as unsigned char values, so that `\200' is greater than `\0', for example).
	Zero-length strings are always identical. This behavior is not required by
	C and portable code should only depend on the sign of the returned value.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i ++;
	}
	return (0);
}
