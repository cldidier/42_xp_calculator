/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldidier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 08:51:02 by cldidier          #+#    #+#             */
/*   Updated: 2019/11/15 03:37:16 by cldidier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*t;
	long long		nb;

	nb = nmemb * size;
	if (!(t = malloc(size * nmemb)))
		return (NULL);
	while (nb--)
		t[nb] = 0;
	return (t);
}
