/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icezar-s <icezar-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 02:01:06 by icezar-s          #+#    #+#             */
/*   Updated: 2025/10/21 19:15:03 by icezar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*node;
	void	*content_cpy;

	map = NULL;
	while (lst != NULL)
	{
		content_cpy = f(lst->content);
		if (!content_cpy)
		{
			ft_lstclear(&map, del);
			return (NULL);
		}
		node = ft_lstnew(content_cpy);
		if (!node)
		{
			del(content_cpy);
			ft_lstclear(&map, del);
			return (NULL);
		}
		ft_lstadd_back(&map, node);
		lst = lst->next;
	}
	return (map);
}
