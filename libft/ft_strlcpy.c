/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:55:47 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/12 17:37:43 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	The strlcpy() function copy strings with the same input parameters and output
	result as snprintf(3).
	They are designed to be safer, more consistent, and less error prone repla-
	cements for the easily misused function strncpy(3).

	strlcpy() take the full size of the destination buffer and guarantee
	NUL-termination if there is room.  Note that room for the NUL should be
	included in dstsize.

	strlcpy() copies up to dstsize - 1 characters from the string src to dst,
	NUL-terminating the result if dstsize is not 0.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	l;
	size_t	i;

	l = ft_strlen(src);
	if (!dstsize)
		return (l);
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i ++;
	}
	if (l > dstsize)
		dst[dstsize - 1] = 0;
	else
		dst[i] = 0;
	return (l);
}
