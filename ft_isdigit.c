/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 02:21:43 by nosilves          #+#    #+#             */
/*   Updated: 2023/06/07 23:02:02 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* isdigit() function testeja si es digit
	Returns 0 = false.non-0 = true*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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
		a = ft_isdigit(argv[1][0]);
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
