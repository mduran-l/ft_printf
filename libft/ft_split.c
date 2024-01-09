/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:47:19 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/12 16:43:24 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	get_end(const char *str, size_t start, char c)
{
	while (str[start])
	{
		if (str[start] == c)
			return (start);
		start ++;
	}
	return (start);
}

static size_t	get_start(const char *str, size_t start, char c)
{
	while (str[start])
	{
		if (str[start] != c)
			return (start);
		start ++;
	}
	return (start);
}

static size_t	count_words(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = get_start(s, 0, c);
	while (s[i])
	{
		i = get_start(s, get_end(s, i, c), c);
		count ++;
	}
	return (count);
}

/*
	Reserva (utilizando malloc(3)) un array de strings resultante de separar
	la string ’s’ en substrings utilizando el caracter ’c’ como delimitador.
	El array debe terminar con un puntero NULL.
*/
char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**output;

	output = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!output)
		return (0);
	i = get_start(s, 0, c);
	j = 0;
	while (s[i])
	{
		output[j] = ft_substr(s, (unsigned int)i, get_end(s, i, c) - i);
		if (!output[j])
		{
			while (j)
				free(output[--j]);
			free(output);
			return (0);
		}
		j ++;
		i = get_start(s, get_end(s, i, c), c);
	}
	output[j] = 0;
	return (output);
}
