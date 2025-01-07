/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:42:56 by yevkahar          #+#    #+#             */
/*   Updated: 2025/01/07 16:40:25 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_convert(char c, va_list arg)
{
	if (c == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(arg, char *)));
	else if (c == 'p')
		return (ft_putptr(va_arg(arg, unsigned long)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(arg, int)));
	else if (c == 'u')
		return (ft_putunbr(va_arg(arg, unsigned int)));
	else if (c == 'x')
		return (ft_puthexlow(va_arg(arg, unsigned int)));
	else if (c == 'X')
		return (ft_puthexupp(va_arg(arg, unsigned int)));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	argp;
	int		count;
	int 	i;

	count = 0;
	i = 0;
	va_start(argp, format);
	while (format[i])
	{
		if (format[i] == '%')
			count += ft_convert(format[++i], argp);
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(argp);
	return (count);
}
