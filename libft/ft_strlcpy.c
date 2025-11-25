/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icezar-s <icezar-s@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:15:26 by icezar-s          #+#    #+#             */
/*   Updated: 2025/10/20 23:44:11 by icezar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (!dst)
		return (ft_strlen(src));
	i = 0;
	if (size)
	{
		while ((i < (size - 1)) && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		if (i < size)
			dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
