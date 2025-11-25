/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icezar-s <icezar-s@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 19:18:58 by icezar-s          #+#    #+#             */
/*   Updated: 2025/10/21 16:39:08 by icezar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/* The second check is done to FORCE a segfault, so i prevent undefined       */
/* behavior.                                                                  */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	volatile char	*null_ptr;

	if (dest == src || n == 0)
		return (dest);
	null_ptr = (volatile char *)0;
	if (!dest || !src)
	{
		*null_ptr = 0;
		return (NULL);
	}
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	else
		while (n-- > 0)
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	return (dest);
}
