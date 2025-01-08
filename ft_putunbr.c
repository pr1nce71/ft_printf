/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:40:12 by yevkahar          #+#    #+#             */
/*   Updated: 2025/01/08 15:06:40 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int n)
{
	int	result;

	result = 0;
	if (n == 4294967295)
	{
		result += ft_putchar('4');
		n = 294967295;
	}
	if (n >= 10)
	{
		result += ft_putunbr(n / 10);
	}
	result += ft_putchar('0' + (n % 10));
	return (result);
}

// result += ft_putnbr(n % 10);
// if (n < 10)