/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icezar-s <icezar-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:00:01 by icezar-s          #+#    #+#             */
/*   Updated: 2025/10/21 16:45:37 by icezar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*end;

	if (!(s1 && set))
		return (NULL);
	if (!(*s1))
		return (ft_strdup(s1));
	end = (char *)s1 + ft_strlen(s1);
	while (ft_strchr(set, *s1))
		s1++;
	if (s1 >= end)
		return (ft_strdup(""));
	while (end > s1 && ft_strchr(set, *end))
		end--;
	return (ft_substr(s1, 0, (end - s1) + 1));
}
