/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 14:58:18 by nosilves          #+#    #+#             */
/*   Updated: 2023/06/09 17:16:50 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 memcmp() compara les funcions s1 i s2, ambdues asumim que medeixen n
 returns zero si son identiques, sino retorna la diferencia entre els primers
 caracters diferents.
 */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	i = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	if (i == n)
		return (0);
	else
		return (ptr1[i] - ptr2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    printf("%d\n", ft_memcmp("Hell", "Hella", 5));
    printf("%d", memcmp("Hell", "Hella", 5));
}*/
