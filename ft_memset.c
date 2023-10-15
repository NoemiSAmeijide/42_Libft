/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 02:54:08 by nosilves          #+#    #+#             */
/*   Updated: 2023/06/09 17:26:25 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*memset() escriu len bytes de c (convertida en char) al string b*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (len--)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[20] = "Hello World!";

	printf("Abans: %s\n", str);
	ft_memset(str, '*', 5);
	printf("Abans: %s\n", str);
}*/
