/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldidier <cldidier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 00:50:11 by cldidier          #+#    #+#             */
/*   Updated: 2020/01/11 00:51:14 by cldidier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char endl;

	endl = '\n';
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, &endl, 1);
	return ;
}
