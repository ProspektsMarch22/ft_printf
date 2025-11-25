/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icezar-s <icezar-s@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:25:47 by icezar-s          #+#    #+#             */
/*   Updated: 2025/10/21 02:21:33 by icezar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	if (!(*little))
	{
		ptr = (char *)big;
		return (ptr);
	}
	if (len == 0)
		return (NULL);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && ((i + j) < len) && little[j])
			j++;
		if (little[j] == 0)
		{
			ptr = (char *)(big + i);
			return (ptr);
		}
		i++;
	}
	return (NULL);
}
