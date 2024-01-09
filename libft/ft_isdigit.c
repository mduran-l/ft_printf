/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:41:32 by mduran-l          #+#    #+#             */
/*   Updated: 2023/11/28 13:56:55 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	The isdigit() function tests for a decimal digit character.  Regardless
	of locale, this includes the following characters only:
	0 1 2 3 4 5 6 7 8 9

	The isdigit() function returns zero if the charactee tests false and return
	non-zero if the character tests true.
*/
int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
