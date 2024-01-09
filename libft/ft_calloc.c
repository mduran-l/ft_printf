/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:17:39 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/12 10:19:06 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	The calloc() function contiguously allocates enough space for count objects
	that are size bytes of memory each and returns a pointer to the allocated
	memory. The allocated memory is filled with bytes of value zero.

	If successful, calloc() function returns a pointer to allocated memory.
	If there is an error, they return a NULL pointer and set errno to ENOMEM.
*/
void	*ft_calloc(size_t count, size_t size)
{
	void	*output;

	output = (void *)malloc(count * size);
	if (!output)
		return (0);
	ft_bzero(output, count * size);
	return (output);
}
