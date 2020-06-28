/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldidier <cldidier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 00:53:19 by cldidier          #+#    #+#             */
/*   Updated: 2020/01/11 03:40:10 by cldidier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lstmap;
	t_list	*element;

	if (!lst)
		return (NULL);
	element = NULL;
	lstmap = element;
	while (lst)
	{
		if (!(element = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&lstmap, del);
			return (NULL);
		}
		ft_lstadd_back(&lstmap, element);
		lst = lst->next;
	}
	return (lstmap);
}
