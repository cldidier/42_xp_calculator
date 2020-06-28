/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldidier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 04:50:13 by cldidier          #+#    #+#             */
/*   Updated: 2019/11/14 09:38:18 by cldidier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t size)
{
	if (size == 0)
		return (0);
	while (size-- > 1 && *((unsigned char*)ptr1) == *((unsigned char*)ptr2))
	{
		ptr1++;
		ptr2++;
	}
	return (*((unsigned char*)ptr1) - *((unsigned char*)ptr2));
}
