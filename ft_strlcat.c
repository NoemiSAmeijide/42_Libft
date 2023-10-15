/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 04:55:01 by nosilves          #+#    #+#             */
/*   Updated: 2023/06/09 17:38:40 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*strlcat() junta un string src al final de dst.
 * enganxa com a molt dstsize - strlen(dst) -1 + '\0'
 **/

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dest[i] && i < size)
		i++;
	j = i;
	while (src[i - j] && i + 1 < size)
	{
		dest[i] = src[i - j];
		i++;
	}
	if (j < size)
		dest[i] = '\0';
	while (src[i - j])
		i++;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	char dest[20] = "Hola, ";
	char src[] = "mundo!";
	unsigned int size = 0;
	unsigned int result;

	result = ft_strlcat(dest, src, size);
	printf("Cadena concatenada: %s\n", dest);
	printf("Longitud total: %u\n", result);

	return (0);
}*/
