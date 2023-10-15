/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:18:42 by nosilves          #+#    #+#             */
/*   Updated: 2023/06/07 23:07:17 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Utilizando malloc(3), genera una string que represente el valor entero 
 * recibido como argumento. Los números negativos tienen que gestionarse.
 * */

#include "libft.h"

int	count_digits(long l)
{
	int	digits;

	digits = 0;
	while (l / 10)
	{
		l = l / 10;
		digits++;
	}
	if (l <= 9)
		digits++;
	return (digits);
}

char	*ft_itoa(int n)
{
	int		digits;
	int		isneg;
	long	l;
	char	*res;

	isneg = 0;
	l = n;
	if (n < 0)
	{
		isneg = 1;
		l = -l;
	}
	digits = count_digits(l);
	res = malloc((isneg + digits + 1) * sizeof(char));
	if (!res)
		return (NULL);
	if (isneg)
		res[0] = '-';
	res[digits + isneg] = '\0';
	while (--digits >= 0)
	{
		res[digits + isneg] = (l % 10) + '0';
		l = l / 10;
	}
	return (res);
}
/*
#include <limits.h>
#include <stdio.h>
int	main(void)
{
	int	i = -1;
	printf ("%s", ft_itoa(i));
}*/
