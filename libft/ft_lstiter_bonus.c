/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 09:48:32 by mduran-l          #+#    #+#             */
/*   Updated: 2023/12/13 13:07:52 by mduran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	Itera la lista ’lst’ y aplica la función ’f’ en el contenido de cada nodo.
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	int	i;

	if (!lst)
		return ;
	i = ft_lstsize(lst);
	while (i --)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
