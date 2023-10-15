/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 00:51:05 by nosilves          #+#    #+#             */
/*   Updated: 2023/06/09 01:08:27 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Itera la lista ’lst’ y aplica la función ’f’ en el contenido de cada nodo.*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
