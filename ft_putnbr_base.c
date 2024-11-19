/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:44:09 by norabino          #+#    #+#             */
/*   Updated: 2024/11/19 11:29:49 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(long nb, char *base, int *ptr_len)
{
	if (nb < 0)
	{
		nb = -nb;
		*ptr_len += ft_print_c('-');
	}
	if (nb > ft_strlen(base) - 1)
		ft_putnbr_base(nb / ft_strlen(base), base, ptr_len);
	*ptr_len += ft_print_c(base[nb % ft_strlen(base)]);
}
