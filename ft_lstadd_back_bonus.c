/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 23:24:28 by nosilves          #+#    #+#             */
/*   Updated: 2023/06/09 00:28:31 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Añade el nodo ’new’ al final de la lista ’lst’.*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*res;

	res = *lst;
	if (res == NULL)
		*lst = new;
	else
	{
		while (res->next != NULL)
			res = res->next;
		res->next = new;
	}
}
