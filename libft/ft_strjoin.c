/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldidier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 01:35:56 by cldidier          #+#    #+#             */
/*   Updated: 2019/11/15 07:59:37 by cldidier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*cat;
	size_t	j;
	size_t	k;

	k = 0;
	j = 0;
	if (!(cat = malloc((sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1)))))
		return (NULL);
	while (s1[j])
	{
		cat[j] = s1[j];
		j++;
	}
	while (s2[k])
	{
		cat[k + j] = s2[k];
		k++;
	}
	cat[k + j] = '\0';
	return (cat);
}
