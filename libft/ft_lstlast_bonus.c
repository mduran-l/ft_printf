/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 09:49:32 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/13 11:22:34 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	Devuelve el último nodo de la lista.
*/
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*out;

	if (!lst)
		return (0);
	out = lst;
	while (out->next)
		out = out->next;
	return (out);
}
