/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:48:29 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/12 10:21:37 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	A cada carácter de la string ’s’, aplica la función ’f’ dando como paráme-
	tros el índice de cada carácter dentro de ’s’ y el propio carácter.
	Genera una nueva string con el resultado del uso sucesivo de ’f’
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*output;
	unsigned int	i;

	output = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!output)
		return (0);
	i = 0;
	while (s[i])
	{
		output[i] = (*f)(i, s[i]);
		i ++;
	}
	output[i] = '\0';
	return (output);
}
