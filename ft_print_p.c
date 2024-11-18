/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:14:15 by norabino          #+#    #+#             */
/*   Updated: 2024/11/18 14:57:53 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p(unsigned long long nb)
{
	int		len;
	long	n;	

	n = (long)nb;
	if (n == 0)
		len += ft_print_s("(nil)");
	len = 0;
	len += ft_print_s("0x");
	if (n > 0)
		ft_putnbr_base(n, "0123456789abcdef", &len);
	len += ft_size(n, 16);
	return (len);
}
