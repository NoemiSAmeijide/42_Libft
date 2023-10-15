/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 23:51:25 by nosilves          #+#    #+#             */
/*   Updated: 2023/06/09 00:58:21 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Toma como parámetro un nodo ’lst’ y libera la memoria del contenido 
 * utilizando la función ’del’ dada como parámetro, además de liberar el nodo. 
 * La memoria de ’next’ no debe liberarse.*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
