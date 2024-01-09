/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:45:08 by mduran-l          #+#    #+#             */
/*   Updated: 2023/11/28 13:59:42 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	The isalnum() function tests for any character for which isalpha(3) or
	isdigit(3) is true. The value of the argument must be representable as an
	unsigned char or the value of EOF.

	The isalnum() function returns zero if the character tests false and returns
	non-zero if the character tests true.
*/
int	ft_isalnum(int c)
{
	return (ft_isdigit(c) + ft_isalpha(c));
}
