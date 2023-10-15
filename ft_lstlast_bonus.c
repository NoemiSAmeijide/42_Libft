/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 23:14:07 by nosilves          #+#    #+#             */
/*   Updated: 2023/06/08 23:51:34 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Devuelve el último nodo de la lista.*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*res;

	res = lst;
	if (lst == NULL)
		return (NULL);
	while (res->next != NULL)
		res = res->next;
	return (res);
}
