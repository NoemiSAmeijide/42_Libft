/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:56:34 by nosilves          #+#    #+#             */
/*   Updated: 2023/06/07 13:06:31 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*A cada carácter de la string ’s’, aplica la función ’f’ dando como parámetros
 * el índice de cada carácter dentro de ’s’ y la dirección del propio carácter,
 * que podrá modificarse si es necesario.*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, (s + i));
		i++;
	}
}
