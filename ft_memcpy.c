/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:14:05 by nosilves          #+#    #+#             */
/*   Updated: 2023/06/09 17:23:11 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*memcpy() copia n bytes de src a dst
 * Si src overlapa, es igual.*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*strsrc;
	unsigned char	*strdst;
	size_t			i;

	i = 0;
	strsrc = (unsigned char *)src;
	strdst = (unsigned char *)dst;
	if (!strsrc && !strdst)
		return (strdst);
	while (i < n)
	{
		strdst[i] = strsrc[i];
		i++;
	}
	return (strdst);
}
/*
#include <stdio.h>
int	main(void)
{
	char dst[20];
	const void *src;
	char str[20] = "Hello World!";

	dst[0] = '\0';	
	src = str;
	printf("Desti: %s\n", ft_memcpy(dst, src, 7));
	printf("Original: %s\n", src);
}*/
