/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexupp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:40:09 by yevkahar          #+#    #+#             */
/*   Updated: 2025/01/08 15:17:35 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexupp(unsigned long long n)
{
	int		result;

	result = 0;
	if (n >= 16)
		result += ft_puthexupp(n / 16);
	result += ft_putchar(HU[n % 16]);
	return (result);
}

// HU = "0123456789ABCDEF"