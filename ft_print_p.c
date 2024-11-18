/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:14:15 by norabino          #+#    #+#             */
/*   Updated: 2024/11/18 15:00:53 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p(unsigned long long nb)
{
	int		len;

	len = 0;
	if (nb == 0)
		return (ft_print_s("(nil)"));
	len += ft_print_s("0x");
	if (nb > 0)
		ft_putnbr_base(nb, "0123456789abcdef", &len);
	len += ft_size(nb, 16);
	return (len);
}
