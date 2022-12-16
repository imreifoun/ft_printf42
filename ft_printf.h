/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areifoun <areifoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:16:20 by areifoun          #+#    #+#             */
/*   Updated: 2022/12/13 13:43:17 by areifoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_putnbr_u(unsigned int n);
int	ft_putstr(char *s);
int	ft_puthex_u(unsigned long n);
int	ft_putnbr(int n);
int	ft_puthex(unsigned int n);
int	ft_puthex_ad(unsigned long n);
int	ft_putchar(char c);
int	ft_printf(const char *print, ...);

#endif