/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldidier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 09:23:20 by cldidier          #+#    #+#             */
/*   Updated: 2019/11/15 07:38:21 by cldidier         ###   ########.fr       */
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

char			*ft_strdup(const char *s)
{
	char	*t;
	size_t	i;

	i = 0;
	if (!(t = malloc((ft_strlen((char*)s) + 1))))
		return (NULL);
	while (i < ft_strlen((char*)s))
	{
		t[i] = s[i];
		i++;
	}
	t[i] = '\0';
	return (t);
}
