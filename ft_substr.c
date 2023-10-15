/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 18:17:51 by nosilves          #+#    #+#             */
/*   Updated: 2023/06/07 13:09:39 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Reserva (con malloc(3)) y devuelve una substring de la string ’s’.
La substring empieza desde el índice ’start’y tiene una longitud máxima ’len’*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	slen;

	slen = ft_strlen(s);
	if (slen < start || slen == 0)
		return (ft_strdup(""));
	else if ((slen - start) >= len)
	{
		ptr = malloc ((len + 1) * sizeof(char));
		if (!ptr)
			return (NULL);
		ft_memmove(ptr, (s + start), len);
		ptr[len] = '\0';
	}
	else
	{
		ptr = malloc (((slen - start) + 1) * sizeof(char));
		if (!ptr)
			return (NULL);
		ft_memmove(ptr, (s + start), (slen - start));
		ptr[slen - start] = '\0';
	}
	return (ptr);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
//	char const		s[] = "Lloro Iguana Serpentina";
	unsigned int	start = 0;
	size_t			len = 1;

//	printf ("%d", substr(s, start, len));
	printf ("%s", ft_substr("", start, len));
}*/
