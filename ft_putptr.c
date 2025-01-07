/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:35:24 by yevkahar          #+#    #+#             */
/*   Updated: 2025/01/07 17:02:40 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long long n)
{
	int	result;

	result = 0;
	result += ft_putstr("0x");
	result += ft_putthexlow(n);
	return (result);
}

// 0x499602d2