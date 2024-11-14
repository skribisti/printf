/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:42:04 by norabino          #+#    #+#             */
/*   Updated: 2024/11/14 09:27:35 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_isconv(char c)
{
	int	i;
	char *charset;

	i = 0;
	charset = "cspiudxX%";
	while (charset)
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		len;
	int		i;
	
	va_start(ap, str);
	len = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] != '%')
		{
			write(1, &str[i], 1);
			i++;
		}
		i++;
		//if (str[i] == '%' && ft_isconv(str[i + 1]))
			//...
	}
	return (len);
}
