/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldidier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 02:42:34 by cldidier          #+#    #+#             */
/*   Updated: 2020/01/11 00:49:38 by cldidier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wc(const char *s, char c)
{
	size_t i;
	size_t j;

	j = 0;
	i = 0;
	while (s[i])
	{
		if ((i == 0 || (s[i - 1] == c)) && (s[i] != c))
			j++;
		i++;
	}
	return (j);
}

static size_t	ft_wl(char const *s, char c)
{
	size_t i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void		*ft_freem(int i, char **t)
{
	while (i > 0)
		free(t[--i]);
	free(t);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	char	**str;
	size_t	j;
	size_t	i;
	size_t	k;

	k = 0;
	i = 0;
	if (!s || !(str = (char**)malloc(sizeof(char*) * (ft_wc(s, c) + 1))))
		return (NULL);
	while (i < ft_wc(s, c))
	{
		if (((j = 0) == 0) && (k == 0 || (s[k - 1] == c)) && (s[k] != c))
		{
			j = 0;
			if (!(str[i] = (char*)malloc((ft_wl((s + k), c) + 1))))
				return (ft_freem(i, str));
			while (ft_wl((s + k), c) && s[k])
				str[i][j++] = s[k++];
			str[i][j] = '\0';
			i++;
		}
		k++;
	}
	str[i] = NULL;
	return (str);
}
