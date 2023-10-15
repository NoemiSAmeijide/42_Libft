/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 03:48:30 by nosilves          #+#    #+#             */
/*   Updated: 2023/06/07 22:52:30 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*La funcio atoi() converteix la porcio inicial de lstring en chars,
 * negatiu o positiu, passant de espais.*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	res;

	i = 0;
	n = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\r' || str[i] == '\t'
		|| str[i] == '\n' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n = n * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	res = res * n;
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] = "     ----++--524464nj3524";

	printf("%d", ft_atoi(str));
}*/
