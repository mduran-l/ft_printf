/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:07:59 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/04 12:48:00 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	The strchr() function locates the first occurrence of c (converted to a
	char) in the string pointed to by s.  The terminating null character is
	considered to be part of the string; therefore if c is `\0', the functions
	locate the terminating `\0'.

	The strrchr() function is identical to strchr(), except it locates the last
	occurrence of c.

	The functions strchr() and strrchr() return a pointer to the located
	character, or NULL if the character does not appear in the string.
*/
char	*ft_strrchr(const char *s, int c)
{
	size_t	l;

	l = ft_strlen(s);
	if ((signed char)c == '\0')
		return ((char *)&s[l]);
	while (l --)
	{
		if ((signed char)s[l] == (signed char)c)
			return ((char *)&s[l]);
	}
	return (0);
}
