/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:16:12 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/05 11:00:49 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	The strncmp() function lexicographically compare the null-terminated strings
	s1 and s2.

	The strncmp() function compares not more than n characters. Because
	strncmp() is designed for comparing strings rather than binary data,
	characters that appear after a `\0' character are not compared.

	The strncmp() function returns an integer greater than, equal to, or less
	than 0, according as the string s1 is greater than, equal to, or less than
	the string s2.  The comparison is done using unsigned characters, so
	that `\200' is greater than `\0'.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return (((unsigned char)s1[i] - (unsigned char)s2[i]));
		i ++;
	}
	return (0);
}
