/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldidier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 02:48:17 by cldidier          #+#    #+#             */
/*   Updated: 2019/11/15 04:20:18 by cldidier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	if (dest < src)
	{
		i = 0;
		while (n--)
		{
			((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
			i++;
		}
	}
	if (src < dest)
	{
		i = (n - 1);
		while (n--)
		{
			((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
			i--;
		}
	}
	return (dest);
}
