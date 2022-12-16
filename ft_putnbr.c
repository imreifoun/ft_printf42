/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areifoun <areifoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 23:00:09 by areifoun          #+#    #+#             */
/*   Updated: 2022/12/13 12:24:13 by areifoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_negv(char *str, int i, int len, int negv)
{
	if (negv)
	{
		str[len] = '-';
		i++;
		return (i);
	}
	else
		return (i);
}

static int	ft_abs(int x, int negv)
{
	if (negv)
		return (-x);
	return (x);
}

int	ft_putnbr(int n)
{
	char	str[12];
	int		len;
	int		negv;
	int		i;

	negv = (n < 0);
	len = 0;
	i = 0;
	if (n == 0)
	{
		str[0] = '0';
		i++;
	}
	while (n != 0)
	{
		str[len++] = '0' + ft_abs(n % 10, negv);
		n /= 10;
		i++;
	}
	i = ft_negv(str, i, len, negv);
	if (!negv && len != 0)
		len--;
	while (len >= 0)
		write(1, &str[len--], 1);
	return (i);
}
