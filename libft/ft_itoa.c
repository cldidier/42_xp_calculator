/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldidier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 01:39:03 by cldidier          #+#    #+#             */
/*   Updated: 2019/11/15 06:27:57 by cldidier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_subten(int i)
{
	int j;

	j = 1;
	if (i < 0)
	{
		j++;
		i *= -1;
	}
	while (i > 9)
	{
		i /= 10;
		j++;
	}
	return (j);
}

char		*ft_itoa(int n)
{
	char	*nb;
	int		i;
	int		sub;

	sub = ft_subten(n);
	i = 0;
	if (n == -2147483648 || n == 0)
		return (ft_strdup(n == 0 ? "0" : "-2147483648"));
	if (!(nb = malloc(sizeof(char) * (sub + 1))))
		return (NULL);
	if (n < 0)
	{
		nb[i] = '-';
		n *= -1;
	}
	nb[sub] = '\0';
	while (n > 0)
	{
		nb[sub - i - 1] = (n % 10) + 48;
		i++;
		n /= 10;
	}
	return (nb);
}
