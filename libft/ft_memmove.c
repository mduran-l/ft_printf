/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:10:36 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/12 10:11:55 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	check_overlap(unsigned char *D, unsigned char *S, size_t l)
{
	size_t	i;

	i = 0;
	while (i ++ < l)
		if (*D == *S + i)
			return (1);
	return (0);
}

/*
	The memmove() function copies len bytes from string src to string dst.
	The two strings may overlap; the copy is always done in a non-destructive
	manner.

	The memmove() function returns the original value of dst.
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void			*out;
	unsigned char	*d;
	unsigned char	*s;

	if (!src && !dst)
		return (0);
	out = dst;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (check_overlap(d, s, len))
	{
		d += len - 1;
		s += len - 1;
		while (len --)
			*d -- = *s --;
	}
	else
	{
		while (len --)
			*d ++ = *s ++;
	}
	return (out);
}
