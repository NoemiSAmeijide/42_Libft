/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 14:20:40 by nosilves          #+#    #+#             */
/*   Updated: 2023/06/07 16:18:15 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Elimina todos los caracteres de la string ’set’ desde el principio y desde 
 * el final de ’s1’, hasta encontrar un caracter no perteneciente a ’set’. 
 * La string resultante se devuelve con una reserva de malloc(3)*/

#include "libft.h"

int	coincidence(char s, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != s && set[i] != '\0')
		i++;
	if (set[i] == s)
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	inici;
	unsigned int	end;
	char			*new_str;

	inici = 0;
	end = ft_strlen(s1);
	while (s1[inici] && coincidence(s1[inici], set) == 1)
		inici++;
	while ((coincidence(s1[end], set) == 1) && end > inici)
		end--;
	new_str = ft_substr(s1, inici, (end - inici + 1));
	return (new_str);
}
/*
#include <stdio.h>
int	main(int argv, char **argc)
{
	if (argv == 3)
		printf ("%s", ft_strtrim(argc[1], argc[2]));
	else
		printf ("parametres mal");


		write (fd, "errore", 6);
}*/
