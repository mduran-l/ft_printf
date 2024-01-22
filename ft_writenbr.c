/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writenbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:07:49 by mduran-l          #+#    #+#             */
/*   Updated: 2024/01/22 12:21:37 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr(long n, int base)
{
	static int	r;
	char		*basestr;

	r = 0;
	basestr = "0123456789";
	if (n < 0)
	{
		ft_putchar('-');
		return (ft_putnbr(-n, base) + 1);
	}
	else if (n < base)
		r += ft_putchar(basestr[n % base]);
	else
	{
		ft_putnbr(n / base, base);
		r += ft_putchar(basestr[n % base]);
	}
	return (r);
}
