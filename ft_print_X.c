/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_X.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:17:59 by norabino          #+#    #+#             */
/*   Updated: 2024/11/18 08:43:56 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_X(unsigned int nb)
{
	int	len;

	len = 0;
	ft_putnbr_base(nb, "0123456789ABCDEF", &len);
	return (len);
}