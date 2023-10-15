/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 02:39:56 by nosilves          #+#    #+#             */
/*   Updated: 2023/06/09 20:27:22 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*strlen() conta quants caracters hi ha a *s */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
/*
#include <stdio.h>
int	main(int argc, const char **argv)
{
	if (argc == 2)
	{
		printf("%d", ft_strlen(argv[1]));
	}
	else
	{
		printf("%s", "error");
	}
}*/
