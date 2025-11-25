/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icezar-s <icezar-s@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:39:22 by icezar-s          #+#    #+#             */
/*   Updated: 2025/11/25 19:20:07 by icezar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/libft.h"
# include <stdarg.h>

int	ft_putcharc(char c);
int	ft_putstrc(char *str);
int	ft_putnbr(int nbr);
int	ft_putunbrc(unsigned int nbr);
int	ft_puthexc(char cc, int dec);
int	ft_putaddressc(void *add);
#endif
