/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 18:52:08 by nosilves          #+#    #+#             */
/*   Updated: 2023/06/08 19:06:43 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Añade el nodo ’new’ al principio de la lista ’lst’.*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>
int	main(void)
{
	char	cosa[] = "hola bon dia!!";
	printf ("%s", ft_lstadd_front(cosa)->content);
}*/
