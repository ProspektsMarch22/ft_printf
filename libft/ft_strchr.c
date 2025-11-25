/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icezar-s <icezar-s@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:41:04 by icezar-s          #+#    #+#             */
/*   Updated: 2025/10/16 15:59:32 by icezar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if ((char)c == 0)
		return (&((char *)s)[ft_strlen(s)]);
	i = -1;
	while (s[++i])
		if (s[i] == (char)c)
			return (&((char *)s)[i]);
	return (0);
}
