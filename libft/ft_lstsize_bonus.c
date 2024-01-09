/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 09:55:41 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/13 11:15:47 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	Cuenta el número de nodos de una lista.
*/
int	ft_lstsize(t_list *lst)
{
	int		i;

	if (!lst)
		return (0);
	if (!lst->next)
		return (1);
	i = 1;
	while (lst->next)
	{
		lst = lst->next;
		i ++;
	}
	return (i);
}
