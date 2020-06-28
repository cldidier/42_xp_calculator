/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldidier <cldidier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 14:27:26 by cldidier          #+#    #+#             */
/*   Updated: 2020/06/11 15:28:05 by cldidier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_join(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*join;

	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (NULL);
	j = ft_strlen(s1);
	i = ft_strlen(s2);
	if (!(join = (char*)malloc(sizeof(char) * (i + j + 1))))
	{
		free(s1);
		return (NULL);
	}
	i = -1;
	while (s1[++i])
		join[i] = s1[i];
	i = -1;
	while (s2[++i])
		join[j + i] = s2[i];
	join[j + i] = '\0';
	free(s1);
	s1 = NULL;
	return (join);
}

int		get_index(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	if (str[i] == c)
		return (i);
	return (-1);
}

bool	put_line(char **line, char *str, size_t i)
{
	int	len;

	*line = ft_substr(str, 0, i);
	i++;
	len = ft_strlen(str + i) + 1;
	ft_memmove(str, str + i, len);
	return (true);
}

int		get_next_line(int fd, char **line)
{
	static char	*str;
	char		buffer[(BUFFER_SIZE + 1)];
	int			ret;
	int			i;

	if (!line || fd < 0 || read(fd, buffer, 0) < 0 || BUFFER_SIZE < 1)
		return (-1);
	if (str && ((i = get_index(str, '\n')) != -1))
		return (put_line(line, str, i));
	while ((ret = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[ret] = '\0';
		str = ft_join(str, buffer);
		if ((i = get_index(str, '\n')) != -1)
			return (put_line(line, str, i));
	}
	if (str)
	{
		*line = ft_strdup(str);
		free(str);
		str = NULL;
		return ((bool)ret);
	}
	*line = ft_strdup("");
	return (ret);
}
