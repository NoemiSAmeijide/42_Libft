/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:48:21 by nosilves          #+#    #+#             */
/*   Updated: 2023/06/09 17:25:10 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*memmove() fa el mateix que memcpy pero si que mira loverlap.*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*strsrc;
	unsigned char	*strdst;
	size_t			i;

	i = 0;
	strsrc = (unsigned char *)src;
	strdst = (unsigned char *)dst;
	if (strsrc == strdst)
		return (dst);
	if (strsrc > strdst)
	{
		while (i < len)
		{
			strdst[i] = strsrc[i];
			i++;
		}
	}
	else if (strsrc < strdst)
	{
		while (len--)
			strdst[len] = strsrc[len];
	}
	return (dst);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	src[] = "lorem ipsum dolor sit amet";
	char	*dst;

	dst = src + 1;

	char	src2[] = "lorem ipsum dolor sit amet";
	char	*dst2;

	dst2 = src2 + 1;

	printf("FT Desti: %s\n", ft_memmove(dst, src, 20));
	printf("FT Original: %s\n", src);

	printf("Desti: %s\n", memmove(dst2, src2, 20));
	printf("Original: %s\n", src2);
	}*/
