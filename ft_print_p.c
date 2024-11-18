/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:14:15 by norabino          #+#    #+#             */
/*   Updated: 2024/11/18 11:28:44 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_ptr(long num)
{
	if (num >= 16)
	{
		ft_put_ptr(num / 16);
		ft_put_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_print_c(num + '0');
		else
			ft_print_c(num - 10 + 'a');
	}
}

int	ft_print_p(unsigned long long nb)
{
	int		len;
	long	n;	

	n = (long)nb;
	len = 0;
	len += ft_print_s("0x");
	if (n == 0)
		len += ft_print_s("(nil)");
	if (n > 0)
		ft_putnbr_base(n, "0123456789abcdef", &len);
	if (n < 0)
	{
		ft_put_ptr(n);
		len += ft_size(n, 16);
	}
	return (len);
}
