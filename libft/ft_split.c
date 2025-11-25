/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icezar-s <icezar-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:29:29 by icezar-s          #+#    #+#             */
/*   Updated: 2025/10/21 19:55:02 by icezar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char	const *s, char delim)
{
	bool	flag;
	int		i;
	size_t	count;

	i = -1;
	flag = true;
	count = 0;
	while (s[++i])
	{
		if (s[i] != delim)
		{
			if (flag)
			{
				flag = false;
				count++;
			}
		}
		else if (s[i] == delim)
			flag = true;
	}
	return (count);
}

static void	*ft_free_all(char **arr, size_t j)
{
	while (j > 0)
		free(arr[--j]);
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	char	*start;
	size_t	i;
	size_t	j;

	arr = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!arr)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = (char *)(s + i);
		while (s[i] && s[i] != c)
			i++;
		arr[j] = ft_substr(start, 0, (size_t)(s + i - start));
		if (!arr[j++])
			return (ft_free_all(arr, j - 1));
	}
	arr[j] = NULL;
	return (arr);
}
