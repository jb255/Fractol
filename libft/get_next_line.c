/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getnextline.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaustry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 22:04:28 by jaustry           #+#    #+#             */
/*   Updated: 2016/02/14 19:37:55 by jaustry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char		*strjoin_free(char *s1, char *s2, int s)
{
	int		x;
	int		y;
	char	*sol;

	x = s1 != NULL ? ft_strlen(s1) : 0;
	y = s2 != NULL ? ft_strlen(s2) : 0;
	sol = ft_strnew(x + y);
	x = 0;
	while (s1 && s1[x])
	{
		sol[x] = s1[x];
		x++;
	}
	if (s1 && (s == 1 || s == 3))
		free(s1);
	y = 0;
	while (s2 && s2[y])
	{
		sol[x + y] = s2[y];
		y++;
	}
	if (s2 && (s == 2 || s == 3))
		free(s2);
	return (sol);
}

static int		check_line(char **table, char **line)
{
	char *str;
	char *tmp;

	tmp = *table;
	str = ft_strchr(*table, '\n');
	if (!str)
		return (0);
	*str = '\0';
	*line = ft_strdup(*table);
	*table = ft_strdup(str + 1);
	free(tmp);
	return (1);
}

static int		last_line(char **table, char **line)
{
	*line = ft_strdup(*table);
	free(*table);
	*table = NULL;
	if (*line[0] == '\0')
	{
		free(*line);
		*line = NULL;
		return (0);
	}
	return (1);
}

int				get_next_line(int const fd, char **line)
{
	static char		*s[255];
	char			buf[BUFF_SIZE + 1];
	int				r;

	if (fd < 0 || fd > 255 || line == NULL)
		return (-1);
	if (s[fd] && check_line(&(s[fd]), line))
		return (1);
	while ((r = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[r] = '\0';
		s[fd] = (s[fd] ? strjoin_free(s[fd], buf, 1) : ft_strdup(buf));
		if (check_line(&(s[fd]), line))
			return (1);
	}
	if (s[fd] && r >= 0)
		return (last_line(&(s[fd]), line));
	return (r > 0 ? 1 : r);
}
