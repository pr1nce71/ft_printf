/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 19:09:37 by yevkahar          #+#    #+#             */
/*   Updated: 2025/01/07 16:52:58 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbr(int n)
{
	int	result;

	result = 0;
	if (n == -2147483648)
	{
		result += ft_putchar('-');
		result += ft_putchar('2');
		n = 147483648;
	}
	if (n < 0)
	{
		result += ft_putchar('-');
		n = -n;
	}
	if (n > 9)
		result += ft_putchar(n / 10);
	result += ft_putchar(n % 10 + 48);
	return (result);
}
