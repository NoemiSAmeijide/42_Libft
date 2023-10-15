/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 21:28:21 by nosilves          #+#    #+#             */
/*   Updated: 2023/06/07 22:57:49 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*calloc() guarda espai suficient per a 'count' i els omple de '\0'
 * retorna el * a la memoria nova, si hi ha un error = NULL
 */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(size * count);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size * count);
	return (ptr);
}
