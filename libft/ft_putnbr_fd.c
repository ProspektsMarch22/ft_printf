/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icezar-s <icezar-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:36:06 by icezar-s          #+#    #+#             */
/*   Updated: 2025/10/21 16:06:33 by icezar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_recursive_putnbr(long int n, int fd)
{
	if (n > 9)
		ft_recursive_putnbr((n / 10), fd);
	ft_putchar_fd(((n % 10) + '0'), fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long int	ln;

	ln = n;
	if (ln < 0)
	{
		ft_putchar_fd('-', fd);
		ln = -ln;
	}
	ft_recursive_putnbr(ln, fd);
}
