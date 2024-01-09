/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:47:23 by mduran-l          #+#    #+#             */
/*   Updated: 2023/11/28 14:53:56 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	The memset() function writes len bytes of value c (converted to an
	unsigned char) to the string b.

	The memset() function returns its first argument.
*/
void	*ft_memset(void *b, int c, size_t len)
{
	while (len --)
	{
		((char *)b)[len] = (char)c;
	}
	return (b);
}
