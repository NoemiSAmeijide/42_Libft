/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 19:22:00 by nosilves          #+#    #+#             */
/*   Updated: 2023/06/09 20:40:39 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*strrchr() busca lultim c en *s
 * retorna el seu *  */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;

	res = 0;
	while (*s != '\0')
	{
		if (*s == (char)c)
			res = (char *)s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
	const char	*s;
	int	c;

	c = 77;
	s = "NOEMI";
	printf("%s", ft_strchr(s, c));
}*/
