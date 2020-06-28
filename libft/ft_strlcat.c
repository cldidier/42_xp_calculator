/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldidier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 05:12:59 by cldidier          #+#    #+#             */
/*   Updated: 2019/11/15 06:36:31 by cldidier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static size_t	ft_strnlen(char *s, size_t i)
{
	size_t	j;

	j = 0;
	while (s[j] && j < i)
		j++;
	return (j);
}

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t k;
	size_t i;
	size_t j;

	k = ft_strnlen(dst, size) + ft_strlen((char*)src);
	i = 0;
	j = ft_strnlen(dst, size);
	if (!dst)
		return (0);
	while ((j + 1) < size && src[i])
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	if (j < size)
		dst[j] = '\0';
	return (k);
}
