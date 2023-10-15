/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:45:46 by nosilves          #+#    #+#             */
/*   Updated: 2023/06/08 18:47:40 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Crea un nuevo nodo utilizando malloc(3). La variable miembro ’content’ 
 * se inicializa con el contenido del parámetro ’content’. La variable ’next’,
 * con NULL.*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nodo;

	nodo = malloc(sizeof(t_list));
	if (!nodo)
		return (NULL);
	nodo->content = content;
	nodo->next = NULL;
	return (nodo);
}
/*
#include <stdio.h>
int	main(void)
{
	char	cosa[] = "hola bon dia!!";
	printf ("%s", ft_lstnew(cosa)->content);
}*/
