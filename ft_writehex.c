/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writehex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:07:49 by mduran-l          #+#    #+#             */
/*   Updated: 2024/01/22 12:58:33 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_puthex(long long n, const char *basestr)
{
	static int	r;

	r = 0;
	if (n < 0)
	{
		ft_putchar('-');
		return (ft_puthex(-n, basestr) + 1);
	}
	else if (n < 16)
		r += ft_putchar(basestr[n % 16]);
	else
	{
		ft_puthex(n / 16, basestr);
		r += ft_putchar(basestr[n % 16]);
	}
	return (r);
}

static int	ft_puthexaddr(unsigned long long n)
{
	static int	r;
	char		*basestr;

	r = 0;
	basestr = "0123456789abcdef";
	if (n < 16)
		r += ft_putchar(basestr[n % 16]);
	else
	{
		ft_puthexaddr(n / 16);
		r += ft_putchar(basestr[n % 16]);
	}
	return (r);
}

int	ft_putaddr(unsigned long long p)
{
	write(1, "0x", 2);
	return ((int)ft_puthexaddr(p) + 2);
}
