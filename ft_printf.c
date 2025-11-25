/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icezar-s <icezar-s@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:51:40 by icezar-s          #+#    #+#             */
/*   Updated: 2025/11/25 19:52:06 by icezar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printf_juggler(char conversor, va_list ap)
{
	if (conversor == 'c')
		return (ft_putcharc(va_arg(ap, char)));
	else if (conversor == 'd' || conversor == 'i')
		return (ft_putnbrc(va_arg(ap, int)));
	else if (conversor == 's')
		return (ft_putstrc(va_arg(ap, char *)));
	else if (conversor == 'p')
		return (ft_putaddressc(va_arg(ap, void *)));
	else if (conversor == 'u')
		return (ft_putunbrc(va_arg(ap, unsigned int)));
	else if (conversor == 'x' || conversor == 'X')
		return (ft_puthexc(conversor, va_arg(ap, int)));
	else if (conversor == '%')
		return (ft_putcharc('%'));
}

int	ft_printf(const char *fmt, ...)
{
	va_list		ap;
	int			count;
	char		*p;

	va_start(ap, fmt);
	p = fmt;
	count = 0;
	while (*p)
	{
		if (*p != '%')
		{
			count += ft_putcharc(*p);
			continue ;
		}
		else if (*p == '%')
			count += ft_printf_juggler(++*p, ap);
	}
	va_end(ap);
	return (count);
}
