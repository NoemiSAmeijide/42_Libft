/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:14:00 by nosilves          #+#    #+#             */
/*   Updated: 2023/06/09 20:38:42 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*strnstr() busca la primera coincidencia de tot el string needle en el 
 * haystack
 * Retorna: si needle == '\0', retornem haystack. 
 * si no troba resultat, retornem NULL
 * sino, el pointer del resultat */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n_len;
	size_t	i;
	size_t	j;

	i = 0;
	n_len = ft_strlen(needle);
	if (n_len == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && ((i + j) < len))
		{
			if (j == n_len - 1)
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char	nee[] = "hello";
	char	hay[] = "qwertyuiopwerhellotyuidfg";

	printf ("%s", ft_strnstr(hay, nee, 15));
	printf ("\n%s", strnstr(hay, nee, 15));
}*/
