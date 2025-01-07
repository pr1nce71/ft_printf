/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:14:36 by yevkahar          #+#    #+#             */
/*   Updated: 2025/01/07 16:56:42 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTPRINTF_H
# define FTPRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int		ft_putchar(int c);
int		ft_putstr(char *s);
int		ft_printf(const char *, ...);
int		ft_putnbr(int n);
int		ft_putptr(unsigned long long n);








# endif