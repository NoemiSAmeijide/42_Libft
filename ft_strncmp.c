/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 03:31:21 by nosilves          #+#    #+#             */
/*   Updated: 2023/06/09 20:35:26 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*strncmp() compara lexicograficament els strings s1 i s2
 *retorna un int > = o < segons resulti la comparacio */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i == n)
		return (0);
	else
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    printf("%d\n", ft_strncmp("Hell", "Hella", 5));
    printf("%d", strncmp("Hell", "Hella", 5));
}*/
