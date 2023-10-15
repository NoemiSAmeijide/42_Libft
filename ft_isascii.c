/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 02:29:44 by nosilves          #+#    #+#             */
/*   Updated: 2023/06/07 23:01:27 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*isascii() comprova que sigui un num dins la taula ascii*/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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
		a = ft_isascii(argv[1][0]);
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
