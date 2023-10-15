/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 00:11:59 by nosilves          #+#    #+#             */
/*   Updated: 2023/06/09 00:50:51 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Elimina y libera el nodo ’lst’ dado y todos los consecutivos de ese nodo, 
 * utilizando la función ’del’ y free(3).
	Al final, el puntero a la lista debe ser NULL.*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*res;

	res = *lst;
	if (res != NULL)
	{
		if (res->next != NULL)
			ft_lstclear(&res->next, del);
		del((void *)res->content);
		free(res);
		*lst = NULL;
	}
}
