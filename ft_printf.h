/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:14:36 by yevkahar          #+#    #+#             */
/*   Updated: 2025/01/07 17:49:40 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTPRINTF_H
# define FTPRINTF_H
# define HL = "0123456789abcdef"
# define HU = "0123456789ABCDEF"

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int		ft_putnbr(int n);
int		ft_putchar(int c);
int		ft_putstr(char *s);
int		ft_putunbr(unsigned int n);
int		ft_putptr(unsigned long long n);
int		ft_printf(const char *format, ...);
int		ft_putthexlow(unsigned long long n);
int		ft_putthexupp(unsigned long long n);

#endif