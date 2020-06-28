/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldidier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 01:33:34 by cldidier          #+#    #+#             */
/*   Updated: 2020/01/11 01:00:16 by cldidier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(char const *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static size_t	ft_isinther(char c, const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	getsize(char const *s, const char *set)
{
	size_t i;
	size_t j;

	j = 0;
	i = 0;
	while (s[i] && ft_isinther(s[i], set))
	{
		j++;
		i++;
	}
	if (s[i])
	{
		i = ft_strlen(s) - 1;
		while (i > 0 && ft_isinther(s[i], set))
		{
			i--;
			j++;
		}
	}
	return (ft_strlen(s) - j);
}

char			*ft_strtrim(char const *s, char const *set)
{
	char	*trimmed;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = getsize(s, set);
	if (!s || !set || (!(trimmed = malloc(sizeof(char) * (k + 1)))))
		return (NULL);
	while (s[i] && ft_isinther(s[i], set))
		i++;
	while (j < k)
	{
		trimmed[j] = s[i];
		j++;
		i++;
	}
	trimmed[j] = '\0';
	return (trimmed);
}
