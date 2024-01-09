/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:46:01 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/05 14:00:40 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	Reserva (con malloc(3)) y devuelve una nueva string, formada por la conca-
	tenación de ’s1’ y ’s2’.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l;
	size_t	i;
	char	*output;

	output = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!output)
		return (0);
	l = 0;
	while (l < ft_strlen(s1))
	{
		output[l] = s1[l];
		l ++;
	}
	i = 0;
	while (i < ft_strlen(s2))
		output[l ++] = s2[i ++];
	output[l] = '\0';
	return (output);
}
