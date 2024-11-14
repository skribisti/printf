/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:42:04 by norabino          #+#    #+#             */
/*   Updated: 2024/11/14 10:56:05 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

int	ft_printchar(char c)
{
	write(1, &c, 1);
	return (1);
}

void	ft_conversions(va_list ap, const char *format, int	*i, int *len)
{
	if (format[*i + 1] && format[*i + 1] == 'c')
		*len += ft_print_c();
	if (format[*i + 1] && format[*i + 1] == 's')
		*len +=ft_print_s();
	if (format[*i + 1] && format[*i + 1] == 'p')
		*len +=ft_print_p();
	if (format[*i + 1] && format[*i + 1] == 'i')
		*len +=ft_print_i();
	if (format[*i + 1] && format[*i + 1] == 'u')
		*len +=ft_print_u();
	if (format[*i + 1] && format[*i + 1] == 'd')
		*len +=ft_print_d();
	if (format[*i + 1] && format[*i + 1] == 'x')
		*len +=ft_print_x();
	if (format[*i + 1] && format[*i + 1] == 'X')
		*len +=ft_print_x();
	return ;
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		len;
	int		i;
	char newline = '\n';
	
	va_start(ap, format);
	len = 0;
	i = 0;
	while (format[i] != '%' && format[i])
	{
		write(1, &format[i], 1);
		i++;
		len++;
	}
	while (format[i])
	{
		if (format[i] == '%' && ft_isconv(format[i + 1]))
		{	
			if (format[i + 1] == '%')
				len += ft_printchar('%');	
			else
				ft_conversions(ap, format, &i, &len);
			i += 2;
			continue;
		}
		len += ft_printchar(format[i]);
		i++;
	}
	return (len);
}

int	main(void)
{
	ft_printf("allo%d bonjour");
	return 0;
}
