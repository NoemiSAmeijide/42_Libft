/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 22:03:00 by nosilves          #+#    #+#             */
/*   Updated: 2023/06/07 22:18:56 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	l;
	char	c;

	l = n;
	if (n < 0)
	{
		write (fd, "-", 1);
		l = -l;
	}
	if (l / 10)
		ft_putnbr_fd((l / 10), fd);
	c = l % 10 + '0';
	write (fd, &c, 1);
}
