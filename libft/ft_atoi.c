/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icezar-s <icezar-s@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:07:44 by icezar-s          #+#    #+#             */
/*   Updated: 2025/10/21 00:35:24 by icezar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(unsigned char c)
{
	if (c == 32 || c == '\f' || c == '\n' || c == '\r' || c == '\t'
		|| c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	nbr;
	int	signal;

	i = -1;
	signal = 1;
	nbr = 0;
	while (ft_isspace(nptr[++i]))
		;
	if (nptr[i] == '-')
	{
		signal = -signal;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (ft_isdigit(nptr[i]))
		nbr = (nptr[i++] - '0') + (nbr * 10);
	return (signal * nbr);
}
