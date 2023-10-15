/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 02:25:52 by nosilves          #+#    #+#             */
/*   Updated: 2023/06/07 22:59:41 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* isalnum() mira si el caracter es alfanumeric  
 * retorna 0 si no ho es, i no0 si es cert*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
#include <unistd.h>
int	main(int argc, char **argv)
{
	int	a;

	if (argc != 2)
		write (1, "error", 5);
	else
	{
		a = ft_isalnum(argv[1][0]);
		if (a == 0)
		{
			write (1, "no", 2);
		}
		else
		{
			write (1, "si", 2);
		}
	}
}*/
