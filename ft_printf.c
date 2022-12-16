/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areifoun <areifoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:42:50 by areifoun          #+#    #+#             */
/*   Updated: 2022/12/09 11:42:50 by areifoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include<stdio.h>

static int	ft_check(char str, int i, va_list ptr)
{
	if (str == 'c')
		i += ft_putchar(va_arg(ptr, int));
	else if (str == 's')
		i += ft_putstr(va_arg(ptr, char *));
	else if (str == 'x')
		i += ft_puthex(va_arg(ptr, unsigned int));
	else if (str == 'X')
		i += ft_puthex_u(va_arg(ptr, unsigned int));
	else if (str == 'd' || str == 'i')
		i += ft_putnbr(va_arg(ptr, int));
	else if (str == 'p')
	{
		i += write(1, "0x", 2);
		i += ft_puthex_ad(va_arg(ptr, size_t));
	}
	else if (str == 'u')
		i += ft_putnbr_u(va_arg(ptr, unsigned int));
	else if (str == '%')
		i += ft_putchar('%');
	else
		i += write(1, &str, 1);
	return (i);
}

int	ft_printf(const char *print, ...)
{
	int		i;
	va_list	ptr;

	i = 0;
	va_start(ptr, print);
	if (write(1, NULL, 0) == -1)
		return (1);
	while (*print)
	{
		if (*print == '%')
		{	
			print++;
			if (*print == '\0')
				break ;
			i = ft_check(*print, i, ptr);
		}
		else
			i += write(1, print, 1);
		print++;
	}
	va_end(ptr);
	return (i);
}
