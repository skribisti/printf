/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:00:41 by norabino          #+#    #+#             */
/*   Updated: 2024/11/18 11:29:07 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_size(int nb, int divisor)
{
	int	len;

	len = 0;
	while (nb > divisor - 1)
	{
		nb /= divisor;
		len++;
	}
	return (len);
}
