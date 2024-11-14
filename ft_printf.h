/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 08:45:41 by norabino          #+#    #+#             */
/*   Updated: 2024/11/14 10:22:14 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

#include <stdio.h> //temporaire

int	ft_printf(const char *str, ...);

int	ft_print_c(void);
int	ft_print_s(void);
int	ft_print_p(void);
int	ft_print_d(void);
int	ft_print_i(void);
int	ft_print_u(void);
int	ft_print_x(void);
int	ft_print_X(void);

#endif