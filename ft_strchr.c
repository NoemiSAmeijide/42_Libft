/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 18:10:00 by nosilves          #+#    #+#             */
/*   Updated: 2023/06/09 17:30:51 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*strchr() localitza la primera c (en char) de el *s. Acaba en NULL
 * si c es '\0' retorna el null final. retorna el * al char demanat. */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != (char)c)
		s++;
	if (*s != (char)c)
		return ((char *)0);
	return ((char *)s);
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
