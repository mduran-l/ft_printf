/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:07:49 by mduran-l          #+#    #+#             */
/*   Updated: 2024/01/10 13:27:05 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		str = "(null)";
	while (str[i])
	{
		write(1, &str[i], 1);
		i ++;
	}
	return (i);
}

int	ft_putnbr(long n, int base, int up)
{
	static int	r;
	char		*basestr;
	char		*baseup;

	r = 0;
	basestr = "0123456789abcdef";
	baseup = "0123456789ABCDEF";
	if (up)
		basestr = baseup;
	if (n < 0)
	{
		r += ft_putchar('-');
		ft_putnbr(-n, base, up);
	}
	else if (n < base)
		r += ft_putchar(basestr[n % base]);
	else
	{
		ft_putnbr(n / base, base, up);
		r += ft_putchar(basestr[n % base]);
	}
	return (r);
}

int	ft_putpointer(void *p)
{
	long	n;

	n = (long)p;
	if (n < 0)
		n = -n;
	write(1, "0x", 2);
	return (ft_putnbr(n, 16, 0) + 2);
}
