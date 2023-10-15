/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:30:38 by nosilves          #+#    #+#             */
/*   Updated: 2023/06/09 20:26:17 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*destrueix el que hi ha en el dst copiant a sobre el src
  strlcpy() copia dstsize - 1 de src a dst, + '\0' 
Return: el total que medeix src */

#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	sizesrc;

	i = 0;
	sizesrc = ft_strlen(src);
	if (dstsize <= 0)
		return (sizesrc);
	while (i < (dstsize - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (sizesrc);
}
/*
int	main(void)
{
	char	dst[15] = "rrrrrr000000000";
//	char	src[] = "mundo!";
	unsigned int size = 9;
	unsigned int result;
	char dst2[15] = "rrrrrr000000000";
//	char src2[] = "mundo!";
	unsigned int result2;

	result = ft_strlcpy(dst, "", size);
	printf("Cadena concatenada: %s\n", dst);
	printf("Longitud total: %u\n", result);

	result2 = strlcpy(dst2, "", size);
	printf("Cadena concatenada2: %s\n", dst2);
	printf("Longitud total2: %u\n", result2);
}*/
