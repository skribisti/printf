/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:15:34 by norabino          #+#    #+#             */
/*   Updated: 2024/11/15 12:20:40 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_size(int	nb)
{
	int	size;

	size = 1;
	if (nb == -2147483648)
		return (11);
	while (nb > 10)
	{
		nb = nb / 10;
		size++;
	}
	return (size);
}

int	ft_print_d(int nb)
{
	char	z;
	int		size;

	size = 0;
	z = '0';
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return 1;
	}
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
		size = 1;
	}
	if (nb > 9)
		ft_print_d(nb / 10);
	z = z + nb % 10;
	write(1, &z, 1);
	size = size + ft_size(nb);
	return (size);
}