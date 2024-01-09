/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:46:41 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/12 13:21:03 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	find_first(char const *str, char const *set)
{
	size_t	i;
	size_t	j;
	int		found;

	if (ft_strlen(set) == 0)
		return (0);
	i = 0;
	while (i < ft_strlen(str))
	{
		j = 0;
		found = -1;
		while (j < ft_strlen(set))
		{
			if (str[i] == set[j])
				found ++;
			j ++;
		}
		if (found == -1)
			return (i);
		i ++;
	}
	return (0);
}

static size_t	find_last(char const *str, char const *set)
{
	size_t	l;
	size_t	j;
	int		found;

	l = ft_strlen(str);
	if (ft_strlen(set) == 0 || !l)
		return (l);
	l --;
	while (l)
	{
		j = 0;
		found = -1;
		while (j < ft_strlen(set))
		{
			if (str[l] == set[j])
				found ++;
			j ++;
		}
		if (found == -1)
			return (l + 1);
		l --;
	}
	return (0);
}

/*
	Elimina todos los caracteres de la string ’set’ desde el principio y desde
	el final de ’s1’, hasta encontrar un caracter no perteneciente a ’set’.
	La string resultante se devuelve con una reserva de malloc(3)
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	start = find_first(s1, set);
	end = find_last(s1, set);
	return (ft_substr(s1, start, end - start));
}
