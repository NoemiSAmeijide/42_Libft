/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 20:07:48 by nosilves          #+#    #+#             */
/*   Updated: 2023/06/09 17:13:48 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*memchr() localitza la primera c dins el string s 
 *retorn un * sl byte localitzat o NULL si no hi es */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (i < n && ptr[i] == (unsigned char)c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}

/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	const char	*s;
	int	c;

	c = 77;
	s = "NOEMI";
	printf("%s", ft_memchr(s, c, 15));
}*/
