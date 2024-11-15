/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:42:04 by norabino          #+#    #+#             */
/*   Updated: 2024/11/15 15:17:00 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_isconv(char c)
{
	int		i;
	char	*charset;

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
		*len += ft_print_c((char)va_arg(ap, int));
	if (format[*i + 1] && format[*i + 1] == 's')
		*len += ft_print_s((char *)va_arg(ap, char *));
	if (format[*i + 1] && format[*i + 1] == 'p')
		*len += ft_print_p((unsigned long long)va_arg(ap, unsigned long long));
	if (format[*i + 1] && format[*i + 1] == 'i')
		*len += ft_print_d((int)va_arg(ap, int));
	if (format[*i + 1] && format[*i + 1] == 'u')
		*len += ft_print_u((unsigned int)va_arg(ap, unsigned int));
	if (format[*i + 1] && format[*i + 1] == 'd')
		*len += ft_print_d((long)va_arg(ap, long));
	if (format[*i + 1] && format[*i + 1] == 'x')
		*len += ft_print_x((unsigned int)va_arg(ap, unsigned int));
	if (format[*i + 1] && format[*i + 1] == 'X')
		*len += ft_print_x((unsigned int)va_arg(ap, unsigned int));
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		len;
	int		i;

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
			continue ;
		}
		len += ft_printchar(format[i]);
		i++;
	}
	return (len);
}
/*
int	main(void)
{
	int i;
	int j;

	printf("\noutput of real:\n");
	i = printf("Char = %c\n String = %s\n Digit = %d\n Percent = %%\n Int : %i\n UInt = %u\n HexaLow = %x\n HexaUp = %X\n", 'a',"allo", -4500, 8923, 42294, 100, 100);
	printf("\noutput of fake:\n");
	j = ft_printf("Char = %c\n String = %s\n Digit = %d\n Percent = %%\n Int : %i\n UInt = %u\n HexaLow = %x\n HexaUp = %X\n", 'a',"allo", -4500, 8923, 42294, 100, 100);

	printf("\n\nreal:%d,fake:%d",i,j);
	
	return (1);
}
*/