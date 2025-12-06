/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_hex.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icezar-s <icezar-s@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:31:53 by icezar-s          #+#    #+#             */
/*   Updated: 2025/11/26 20:22:46 by icezar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	ft_recursive_puthexc(long int lnbr, int *count, char *base)
{
	if (lnbr > 15)
		ft_recursive_puthexc(lnbr / 16, count, base);
	ft_putchar_fd(1, base[lnbr % 16]);
	*count = 1;
}

static void	ft_recursive_putaddressc(unsigned long mem, int *count, char *base)
{
	if (mem > 15)
		ft_recursive_putaddressc(mem / 16, count, base);
	ft_putchar_fd(1, base[mem % 16]);
	*count += 1;
}

int	ft_puthexc(char cc, int nbr)
{
	int					count;
	long int			lnbr;

	count = 0;
	lnbr = nbr;
	if (lnbr < 0)
	{
		count += ft_putcharc('-');
		lnbr = -lnbr;
	}
	if (cc == 'x')
		ft_recursive_puthexc(lnbr, &count, "0123456789abcdef");
	else if (cc == 'X')
		ft_recursive_puthexc(lnbr, &count, "0123456789ABCDEF");
	return (count);
}

int	ft_putaddressc(void *add)
{
	int						count;
	unsigned long			mem;

	count = 0;
	mem = (unsigned long)(add);
	count += ft_putstrc("0x");
	ft_recursive_putaddressc(mem, &count, "0123456789abcdef");
	return (count);
}
