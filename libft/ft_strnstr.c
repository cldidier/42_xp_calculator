/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldidier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 06:45:16 by cldidier          #+#    #+#             */
/*   Updated: 2019/11/15 07:57:49 by cldidier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char			*ft_strnstr(const char *hays, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (*needle == '\0')
		return ((char*)hays);
	while (hays[i] && len-- >= ft_strlen((char*)needle))
	{
		j = 0;
		while (hays[i + j] == needle[j] && needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return ((char*)hays + i);
		}
		i++;
	}
	return (NULL);
}
