/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:45:07 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/12 12:30:56 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	Reserva (con malloc(3)) y devuelve una substring de la string ’s’.
	La substring empieza desde el índice ’start’ y tiene una longitud máxima
	’len’.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	l;
	char	*output;

	l = ft_strlen(s);
	if (start >= l)
	{
		start = l;
		len = 0;
	}
	if (len > l - start)
		len = l - start;
	output = (char *)ft_calloc(len + 1, sizeof(char));
	if (!output)
		return (0);
	i = 0;
	while (s[start + (unsigned int)i] && i < len)
	{
		output[i] = s[start + (unsigned int)i];
		i ++;
	}
	return (output);
}
