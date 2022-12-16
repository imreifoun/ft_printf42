/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areifoun <areifoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 23:00:09 by areifoun          #+#    #+#             */
/*   Updated: 2022/12/13 11:59:12 by areifoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int n)
{
	int	sum;

	sum = 0;
	if (n >= 10)
	{
		sum += ft_putnbr_u(n / 10);
		sum += ft_putnbr_u(n % 10);
	}
	else
		sum += ft_putchar(n + '0');
	return (sum);
}
