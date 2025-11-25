/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icezar-s <icezar-s@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:55:49 by icezar-s          #+#    #+#             */
/*   Updated: 2025/10/16 17:20:10 by icezar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		i;

	if ((char)c == 0)
		return (&((char *)s)[ft_strlen(s)]);
	i = -1;
	ptr = 0;
	while (s[++i])
		if (s[i] == (char)c)
			ptr = &((char *)s)[i];
	return (ptr);
}
