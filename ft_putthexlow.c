/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putthexlow.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:40:06 by yevkahar          #+#    #+#             */
/*   Updated: 2025/01/07 17:34:32 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putthexlow(unsigned long long n)
{
	int		result;

	result = 0;
	if (n > 15)
		result += ft_putthexlow(n / 16);
	result += ft_putchar(HL[n % 16]);
	return (result);
}

// HL = "0123456789abcdef"