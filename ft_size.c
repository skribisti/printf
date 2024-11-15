/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:14:07 by norabino          #+#    #+#             */
/*   Updated: 2024/11/15 14:55:30 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_size(int	nb, int divisor)
{
	int	size;

	size = 1;
	if (nb == -2147483648)
		return (11);
	while (nb > 10)
	{
		nb = nb / divisor;
		size++;
	}
	return (size);
}