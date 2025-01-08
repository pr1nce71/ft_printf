/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:35:24 by yevkahar          #+#    #+#             */
/*   Updated: 2025/01/08 15:13:52 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long long n)
{
	int	result;

	result = 0;
	if (n == 0)
		result += ft_putstr("0x0");
	else
	{
		result += ft_putstr("0x");
		result += ft_puthexlow(n);
	}
	return (result);
}

// int	main() {
// 	ft_putptr(0);
// 	write(1, "\n", 1);
// 	ft_putptr(4294967295);
// }

// 0x499602d2