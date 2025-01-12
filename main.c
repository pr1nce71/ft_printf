/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 18:55:56 by yevkahar          #+#    #+#             */
/*   Updated: 2025/01/12 19:10:55 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
	int printedChars;
	int printedChars2;
	printedChars = ft_printf("This is a simple %s test with %d format %c hexidecimals %x and unsigned %u, normal unsigned %u\n", "ft_printf", 123, '!', 462, -1, 20);
	printedChars2 = printf("This is a simple %s test with %d format %c hexidecimals %x and unsigned %u, normal unsigned %u\n", "ft_printf", 123, '!', 462, -1, 20);
	ft_printf("Number of characters printed ft_printf: %d\n", printedChars);
	printf("Number of characters printed ft_printf: %d\n", printedChars);
	ft_printf("Number of characters printedin printf: %d\n", printedChars2);
	printf("Number of characters printedin printf: %d\n", printedChars2);
	ft_printf("ft_printf string :%s", "sassss\n");
	printf("printf string :%s", "sassss\n");
	ft_printf("ft_printf character :%c\n",'s');
	printf("printf character :%c\n",'s');
	ft_printf("ft_printf digit positive :%d\n",100);
	printf("printf digit positive :%d\n",100);
	ft_printf("ft_printf digit negative :%d\n",-100);
	printf("printf digit negative :%d\n",-100);
	ft_printf("ft_printf integer positive :%i\n",100);
	printf("printf integer positive :%i\n",100);
	ft_printf("ft_printf integer negative :%i\n",-100);
	printf("printf integer negative :%i\n",-100);
	ft_printf("ft_printf unsigned integer with positive :%u\n",100);
	printf("printf unsigned integer with positive :%u\n",100);
	ft_printf("ft_printf unsigned integer with negative :%u\n",-1);
	printf("printf unsigned integer with negative :%u\n",-1);
	ft_printf("printf pointer : %p\n", (void *)0);
	printf("printf pointer :%p\n", (void *)5456);
	ft_printf("ft_printf hexidesimal small and positeve :%x\n",462);
	printf("printf hexidesimal small and positeve :%x\n",462);
	ft_printf("ft_printf hexidesimal small and negative :%x\n",-462);
	printf("printf hexidesimal small and negative :%x\n",-462);
	ft_printf("ft_printf hexidecimals big and positive :%X\n",462);
	printf("printf hexidecimals big and positive :%X\n",462);
	ft_printf("ft_printf hexidecimals big and negative :%X\n",-462);
	printf("printf hexidecimals big and negative :%X\n",-462);
	ft_printf("ft_printf procent :%%\n");
	printf("printf procent :%%\n");
	ft_printf("ft_printf string without flags\n");
	printf("printf string without flags\n");
	return 0;
}
