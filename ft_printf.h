/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:14:36 by yevkahar          #+#    #+#             */
/*   Updated: 2025/01/08 13:34:42 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define HL "0123456789abcdef"
# define HU "0123456789ABCDEF"

# include <unistd.h> //for write
# include <stdlib.h> //malloc, free
# include <stdarg.h> //va_...

int		ft_printf(const char *format, ...);
//main function
int		ft_putchar(int c);
//for "%c" 
int		ft_putstr(char *s);
//for "%s" strings
int		ft_putptr(unsigned long long n);
//for "%p" pointers
int		ft_putnbr(int n);
//for "%i" & "%d" digits 
int		ft_putunbr(unsigned int n);
//for "%u" unsigned nums
int		ft_putthexlow(unsigned long long n);
//for "%x" 
int		ft_putthexupp(unsigned long long n);
//for "%X"
#endif