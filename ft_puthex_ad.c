/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_ad.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areifoun <areifoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:42:37 by areifoun          #+#    #+#             */
/*   Updated: 2022/12/13 13:27:19 by areifoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_ad(unsigned long n)
{
	char	*str;
	int		i;

	str = "0123456789abcdef";
	i = 0;
	if (n > 15)
	{
		i += ft_puthex_ad(n / 16);
		i += ft_puthex_ad(n % 16);
	}
	else
		i += write(1, &str[n], 1);
	return (i);
}
