/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 09:54:35 by mduran-l          #+#    #+#             */
/*   Updated: 2024/01/10 09:59:24 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static void	parse_string(const char *str, va_list *ap)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == '%')
				ft_putchar_fd('%', 1);
			if (str[i + 1] == 'c')
				ft_putchar_fd(va_arg(*ap, int), 1);
			if (str[i + 1] == 's')
				ft_putstr_fd(va_arg(*ap, char *), 1);
			if (str[i + 1] == 'i')
				ft_putnbr_fd(va_arg(*ap, int), 1);
		}
		i ++;
	}
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

The printf utility exits 0 on success, and >0 if an error occurs.
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

	va_start(ap, str);
	parse_string(str, &ap);
	va_end(ap);
	return (0);
}
