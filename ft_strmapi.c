/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 22:17:20 by nosilves          #+#    #+#             */
/*   Updated: 2023/06/07 14:44:36 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*A cada carácter de la string ’s’, aplica la función ’f’ dando como parámetros
 * el índice de cada carácter dentro de ’s’ y el propio carácter. Genera una 
 * nueva string con el resultado del uso sucesivo de ’f’*/
/*
char	f(unsigned int i, char c)
{
	printf ("%d : %c \n", i, c);
	return (c + i);
}*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_string;
	int		i;

	i = 0;
	new_string = malloc ((ft_strlen(s) + 1) * sizeof(char));
	if (!new_string)
		return (NULL);
	while (s[i] != '\0')
	{
		new_string[i] = f(i, s[i]);
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}
/*
#include <stdio.h>
int	main(void)
{
	printf ("%s", ft_strmapi("freedom is beauty", &f));
}
*/
