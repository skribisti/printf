/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:00:41 by norabino          #+#    #+#             */
/*   Updated: 2024/11/18 12:19:36 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_size(int nb, int divisor)
{
	int	len;
	int	tmp;

	tmp = nb;
	len = 1;
	while (tmp > divisor - 1)
	{
		tmp = tmp / divisor;
		len++;
	}
	return (len);
}
