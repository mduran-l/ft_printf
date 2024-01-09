/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:56:10 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/12 12:56:29 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	The strnstr() function locates the first occurrence of the null-terminated
	string needle in the string haystack, where not more than len characters are
	searched. Characters that appear after a `\0' character are not searched.
	Since the strnstr() function is a FreeBSD specific API, it should only be
	used when portability is not a concern.

	If needle is an empty string, haystack is returned; if needle occurs nowhere
	in haystack, NULL is returned; otherwise a pointer to the first character of
	the first occurrence of needle is returned.
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	if (!len)
		return (0);
	h = 0;
	while (haystack[h])
	{
		n = 0;
		while (needle[n] && haystack[h + n] == needle[n])
			n ++;
		if (n == ft_strlen(needle) && h + n <= len)
			return ((char *)(haystack + h));
		h ++;
	}
	return (0);
}
