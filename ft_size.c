/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:00:41 by norabino          #+#    #+#             */
/*   Updated: 2024/11/18 14:53:02 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_size(long long nb, long long divisor)
{
	int			len;
	long long	tmp;

	tmp = nb;
	len = 1;
	while (tmp > divisor - 1)
	{
		tmp = tmp / divisor;
		len++;
	}
	return (len);
}
