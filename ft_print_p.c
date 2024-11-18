/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:14:15 by norabino          #+#    #+#             */
/*   Updated: 2024/11/18 17:39:14 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_ptrlen(char *ptr)
{
	unsigned int	i;

	i = 0;
	while (ptr[i])
		i++;
	return (i);
}

void	ft_putnbr_ptr(unsigned long nb, char *base, int *ptr_len)
{
	if (nb > ft_ptrlen(base) - 1)
		ft_putnbr_base(nb / ft_ptrlen(base), base, ptr_len);
	*ptr_len += ft_print_c(base[nb % ft_ptrlen(base)]);
}

int	ft_print_p(void *nb)
{
	int		len;

	if (nb == 0)
		return (ft_print_s("(nil)"));
	len = 0;
	len += ft_print_s("0x");
	ft_putnbr_ptr((unsigned long)nb, "0123456789abcdef", &len);
	return (len);
}
