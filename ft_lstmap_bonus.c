/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 01:09:41 by nosilves          #+#    #+#             */
/*   Updated: 2023/06/09 21:01:34 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Itera la lista ’lst’ y aplica la función ’f’ al contenido de cada nodo. 
 * Crea una lista resultante de la aplicación correcta y sucesiva de la 
 * función ’f’ sobre cada nodo. La función ’del’ se utiliza para eliminar 
 * el contenido de un nodo, si hace falta.*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*res_first;
	void	*content;

	res_first = NULL;
	while (lst != NULL)
	{
		content = f(lst->content);
		res = ft_lstnew(content);
		if (content == NULL || res == NULL)
		{
			ft_lstclear(&res_first, del);
			free(content);
			free(res);
			return (NULL);
		}
		ft_lstadd_back(&res_first, res);
		lst = lst->next;
	}
	return (res_first);
}
