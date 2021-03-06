/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldidier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 06:59:31 by cldidier          #+#    #+#             */
/*   Updated: 2019/11/07 15:28:58 by cldidier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c <= 'Z' && c >= 'A') || (c <= 'z' && c >= 'a')
		|| (c <= '9' && c >= '0'))
		return (1);
	else
		return (0);
}
