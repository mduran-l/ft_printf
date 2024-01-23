/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 09:54:35 by mduran-l          #+#    #+#             */
/*   Updated: 2024/01/23 11:50:27 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	parse_char(va_list *ap, char c)
{
	if (c == '%')
		return (ft_putchar('%'));
	if (c == 'c')
		return (ft_putchar(va_arg(*ap, int)));
	if (c == 'd')
		return (ft_putnbr(va_arg(*ap, int), 10));
	if (c == 'i')
		return (ft_putnbr(va_arg(*ap, int), 10));
	if (c == 's')
		return (ft_putstr(va_arg(*ap, char *)));
	if (c == 'p')
		return (ft_putaddr(va_arg(*ap, unsigned long long)));
	if (c == 'u')
		return (ft_putnbr(va_arg(*ap, unsigned int), 10));
	if (c == 'x')
		return (ft_puthex(va_arg(*ap, unsigned int), "0123456789abcdef"));
	if (c == 'X')
		return (ft_puthex(va_arg(*ap, unsigned int), "0123456789ABCDEF"));
	return (0);
}

/*
The printf utility formats and prints its arguments, after the first, under
control of the format.  The format is a character string which contains three
types of objects: plain characters, which are simply copied to standard output,
character escape sequences which are converted and copied to the standard
output, and format specifications, each of which causes printing of the next
successive argument.

The arguments after the first are treated as strings if the corresponding format
is either c, b or s; otherwise it is evaluated as a C constant, with the follo-
wing extensions:

-  A leading plus or minus sign is allowed.
-  If the leading character is a single or double quote, the value is the cha-
   racter code of the next character.

The format string is reused as often as necessary to satisfy the arguments.
Any extra format specifications are evaluated with zero or the null string.

The return value of printf() is the number of characters printed, or EOF to
indicate that an error occurred.
===
Tienes que implementar las siguientes conversiones:
- %c Imprime un solo carácter.
- %s Imprime una string (como se define por defecto en C).
- %p El puntero void * dado como argumento se imprime en formato hexadecimal.
- %d Imprime un número decimal (base 10).
- %i Imprime un entero en base 10.
- %u Imprime un número decimal (base 10) sin signo.
- %x Imprime un número hexadecimal (base 16) en minúsculas.
- %X Imprime un número hexadecimal (base 16) en mayúsculas.
- %% para imprimir el símbolo del porcentaje.
=== Bonus ===
- Gestiona cualquier combinación de los siguientes flags: ’-0.’ y el ancho
  mínimo (field minimum width) bajo todas las conversiones posibles.
- Gestiona todos los siguientes flags: ’# +’ (sí, uno de ellos es un
  espacio).
*/
int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		rt;
	int		i;

	if (write(1, "", 0) < 0)
		return (-1);
	va_start(ap, str);
	i = 0;
	rt = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			rt += parse_char(&ap, str[i + 1]);
			i ++;
		}
		else
			rt += ft_putchar(str[i]);
		i ++;
	}
	va_end(ap);
	return (rt);
}
