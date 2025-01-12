/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:40:12 by yevkahar          #+#    #+#             */
/*   Updated: 2025/01/12 18:53:29 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//should give unsigned num

#include "ft_printf.h"

int	ft_putunbr(unsigned int n)
{
	int	result;

	result = 0;
	if (n >= 10)
	{
		result += ft_putunbr(n / 10);
	}
	result += ft_putchar('0' + (n % 10));
	return (result);
}

// result += ft_putnbr(n % 10);
// if (n < 10)