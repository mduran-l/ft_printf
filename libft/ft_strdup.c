/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:36:20 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/12 10:20:25 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	The strdup() function allocates sufficient memory for a copy of the string
	s1, does the copy, and returns a pointer to it. The pointer may subse-
	quently be used as an argument to the function free(3).
	
	If insufficient memory is available, NULL is returned and errno is set
	to ENOMEM.
	
	The strndup() function copies at most n characters from the string s1 always
	NUL terminating the copied string.
*/
char	*ft_strdup(const char *s1)
{
	size_t	l;
	size_t	i;
	char	*output;

	i = 0;
	l = ft_strlen(s1);
	output = malloc((l + 1) * sizeof(char));
	if (!output)
		return (0);
	while (i <= l)
	{
		output[i] = s1[i];
		i ++;
	}
	return (output);
}
