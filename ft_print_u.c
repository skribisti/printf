/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:10:07 by norabino          #+#    #+#             */
/*   Updated: 2024/11/18 08:45:48 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_u(unsigned int nb)
{
	char	z;
	int		len;

	len = 0;
	z = '0';
	if (nb > 9)
		ft_print_u(nb / 10);
	z = z + nb % 10;
	len += ft_print_c(z);	
	return (len);
}