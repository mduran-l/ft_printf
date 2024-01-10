/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 09:56:53 by mduran-l          #+#    #+#             */
/*   Updated: 2024/01/10 14:48:50 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

size_t		ft_strlen(const char *str);
int			ft_putchar(char c);
int			ft_putstr(char *str);
int			ft_putnbr(long n, int base, int m);
int			ft_putpointer(void *p);
int			ft_printf(const char *str, ...);
#endif
