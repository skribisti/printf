/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:44:09 by norabino          #+#    #+#             */
/*   Updated: 2024/11/15 15:25:06 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;

	nb = (long)nbr;
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb > ft_strlen(base) - 1)
		ft_putnbr_base(nb / ft_strlen(base), base);
	write(1, &base[nb % ft_strlen(base)], 1);
}