/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:07:59 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/12 10:14:35 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	The strchr() function locates the first occurrence of c (converted to a
	char) in the string pointed to by s.  The terminating null character is
	considered to be part of the string; therefore if c is `\0', the functions
	locate the terminating `\0'.

	The function strchr() returns a pointer to the located character, or NULL
	if the character does not appear in the string.
*/
char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = ft_strlen(s);
	if ((signed char)c == '\0')
		return ((char *)&s[l]);
	while (s[i])
	{
		if ((signed char)s[i] == (signed char)c)
			return ((char *)&s[i]);
		i ++;
	}
	return (0);
}
