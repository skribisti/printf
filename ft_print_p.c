/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:14:15 by norabino          #+#    #+#             */
/*   Updated: 2024/11/18 09:04:13 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p(unsigned long long nb)
{
	int	len;

	if (!nb)
		return (ft_print_s("(nil)"));
	if (nb > 0)
		len += ft_print_s("0x");
	ft_putnbr_base(nb, "0123456789abcdef", &len);
	return (len);
}
