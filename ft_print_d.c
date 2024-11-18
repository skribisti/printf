/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:15:34 by norabino          #+#    #+#             */
/*   Updated: 2024/11/18 14:24:01 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long	ft_putnbr(int nb, int *ptr_len)
{
	char	z;
	long	n;

	n = (long)nb;
	z = '0';
	if (nb == -2147483648)
	{
		*ptr_len = 10;
		ft_print_s("-2147483648");
		return (-2147483648);
	}
	if (n < 0)
	{
		n = -n;
		*ptr_len += ft_print_c('-');
	}
	if (n > 9)
		ft_putnbr(n / 10, ptr_len);
	z += n % 10;
	ft_print_c(z);
	return (n);
}

int	ft_print_d(int nb)
{
	int		len;
	long	n;

	n = (long)nb;
	len = 0;
	n = ft_putnbr(n, &len);
	len += ft_size(n, 10);
	return (len);
}
