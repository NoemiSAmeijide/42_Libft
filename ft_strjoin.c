/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:33:36 by nosilves          #+#    #+#             */
/*   Updated: 2023/06/06 20:30:11 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Reserva (con malloc(3)) y devuelve una nueva string, formada por la 
 * concatenación de ’s1’ y ’s2’.*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	slen1;
	size_t	slen2;
	size_t	i;

	i = 0;
	slen1 = ft_strlen(s1);
	slen2 = ft_strlen(s2);
	ptr = malloc ((slen1 + slen2 + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (i < slen1)
	{
		ptr[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < slen2)
	{
		ptr[i + slen1] = s2[i];
		i++;
	}
	ptr[i + slen1] = '\0';
	return (ptr);
}
/*
#include <stdio.h>
int	main(void)
{
	char	s1[] = "Bon, ";
	char	s2[] = "dia!!!";

	printf ("%s", ft_strjoin(s1, s2));
}*/
