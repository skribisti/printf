/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:10:07 by norabino          #+#    #+#             */
/*   Updated: 2024/11/18 14:32:09 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_u(unsigned int nb)
{
	char	z;
	int		len;
	long	n;

	n = (long)nb;
	len = 0;
	z = '0';
	if (n > 9)
		ft_print_u(n / 10);
	z = z + n % 10;
	len += ft_print_c(z);
	printf("%d\n", len);
	printf("%c\n", z);
	return (len);
}

int	main()
{
	ft_print_u(-1);
}