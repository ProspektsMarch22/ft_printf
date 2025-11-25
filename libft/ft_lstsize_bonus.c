/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icezar-s <icezar-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 18:00:03 by icezar-s          #+#    #+#             */
/*   Updated: 2025/10/19 18:02:08 by icezar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*ptr;

	size = 0;
	if (lst == NULL)
		return (size);
	ptr = lst;
	while (ptr != NULL)
	{
		size++;
		ptr = ptr->next;
	}
	return (size);
}
