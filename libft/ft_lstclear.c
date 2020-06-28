/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldidier <cldidier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 00:36:02 by cldidier          #+#    #+#             */
/*   Updated: 2020/01/11 00:36:19 by cldidier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*element;

	if (!lst || !*lst)
		return ;
	element = *lst;
	while (element)
	{
		tmp = element;
		element = element->next;
		(*del)(tmp->content);
		free(tmp);
	}
	*lst = NULL;
}
