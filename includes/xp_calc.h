/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xp_calc.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldidier <cldidier@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/28 02:01:15 by cldidier          #+#    #+#             */
/*   Updated: 2020/06/28 05:37:49 by cldidier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef XP_CALC_H
# define XP_CALC_H

# include <stdio.h>
# include "libft.h"
# include <math.h>

typedef struct	s_xp_struct
{
	char	*project_name;
	int		xp;
}				t_xp_struct;

const t_xp_struct g_xp_tab[] =
{
	{"libft", 462},
	{"netwhat", 462},
	{"get_next_line", 882},
	{"ft_printf", 882},
	{"ft_server", 1722},
	{"cub3D/miniRT", 4620},
	{"minishell", 2814},
	{"libasm", 966},
	{"ft_services", 1008},
	{"philosopher", 3360},
	{"CPP", 9660},
	{"ft_containers", 5796},
	{"ft_irc/webserv", 17304},
	{"ft_transcendence", 24360},
	{NULL, 0}
};
#endif
