/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:15:34 by norabino          #+#    #+#             */
/*   Updated: 2024/11/18 11:01:43 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_d(int nb)
{
	char	z;
	long	n;
	int		len;

	len = ft_size(nb, 10);
	n = (long)nb;
	z = '0';
	if (n < 0)
	{
		n = -n;
		len += ft_print_c('-');
	}
	if (n > 9)
		ft_print_d(n / 10);
	z += n % 10;
	len += ft_print_c(z);
	return (len);
}
