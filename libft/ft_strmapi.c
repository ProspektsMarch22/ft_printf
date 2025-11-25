/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icezar-s <icezar-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 21:39:32 by icezar-s          #+#    #+#             */
/*   Updated: 2025/10/19 15:17:32 by icezar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*map;
	int				i;

	map = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!map)
		return (NULL);
	i = -1;
	while (s[++i])
		map[i] = f((unsigned int)i, s[i]);
	map[i] = 0;
	return (map);
}
