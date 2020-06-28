/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xp_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldidier <cldidier@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/28 01:53:19 by cldidier          #+#    #+#             */
/*   Updated: 2020/06/28 05:38:17 by cldidier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "xp_calc.h"

double	get_blackhole_days(int xp)
{
	int		nb_xp_to_reach;
	int		total_nb_days;
	int		starting_days;
	double	p;

	total_nb_days = 560;
	starting_days = 77;
	p = 0.45;
	nb_xp_to_reach = 49980;
	return (pow((double)xp / nb_xp_to_reach, p) *
							(total_nb_days - starting_days) + starting_days);
}

int		get_current_xp(void)
{
	int		xp;
	int		i;
	char	*buffer;

	xp = 0;
	printf("we're going to calculate your total xp:\n");
	i = 0;
	printf("please, enter your final grade of %s\n", g_xp_tab[i].project_name);
	while (0 < get_next_line(0, &buffer) && g_xp_tab[i + 1].xp)
	{
		xp = xp + ((ft_atoi(buffer) * g_xp_tab[i].xp) / 100);
		printf("your current xp is %d \n", xp);
		i++;
		printf("please, enter your grade of %s\n", g_xp_tab[i].project_name);
	}
	xp = xp + ((ft_atoi(buffer) * g_xp_tab[i].xp) / 100);
	printf("your final xp is %d \n", xp);
	return (xp);
}

int		get_next_xp(void)
{
	int		xp_next;
	int		i;
	char	*buffer;

	printf("Lets see how much BH your're gonna get for your next project\n");
	i = 0;
	xp_next = 0;
	printf("if you've already validate a project,\n");
	printf("add the diff between your next grade and your current\n");
	printf("please, enter the grade you're willing to add for %s\n",
													g_xp_tab[i].project_name);
	while (0 < get_next_line(0, &buffer) && g_xp_tab[i + 1].xp)
	{
		xp_next = xp_next + ((ft_atoi(buffer) * g_xp_tab[i].xp) / 100);
		printf("you'll add %d xp \n", xp_next);
		i++;
		printf("please, enter the grade you're willing to add for %s\n",
													g_xp_tab[i].project_name);
	}
	printf("you'll add %d xp \n", xp_next);
	return (xp_next);
}

int		main(void)
{
	int		xp;
	int		xp_next;
	double	bh_days;

	xp = get_current_xp();
	xp_next = get_next_xp();
	bh_days = get_blackhole_days(xp);
	bh_days = get_blackhole_days(xp + xp_next) - bh_days;
	printf("this should give you %lf days\n", bh_days);
	return (0);
}
