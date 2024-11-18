/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:15:34 by norabino          #+#    #+#             */
/*   Updated: 2024/11/18 08:47:56 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_print_d(int nb)
{
	char	z;
	int		len;
	long	n;
	
	n = (long)nb;
	len = 0;
	z = '0';
	if (n < 0)
	{
		n = -n;
		len += ft_print_c('-');
	}
	if (nb > 9)
		ft_print_d(nb / 10);
	len += ft_print_c(n % 10);
	return (len);
}