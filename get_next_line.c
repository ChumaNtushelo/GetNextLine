/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cntushel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 09:57:53 by cntushel          #+#    #+#             */
/*   Updated: 2019/09/18 08:33:03 by cntushel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static	int	read_lines(char **tmp, char **line, int fd)
{
	int		i;
	char	*newline;

	i = 0;
	while (tmp[fd][i] != '\n' && tmp[fd][i] != '\0')
		i++;
	if (tmp[fd][i] == '\n')
	{
		*line = ft_strsub(tmp[fd], 0, i);
		newline = ft_strdup(tmp[fd] + i + 1);
		free(tmp[fd]);
		tmp[fd] = newline;
	}
	else
	{
		*line = ft_strdup(tmp[fd]);
		ft_strdel(&tmp[fd]);
	}
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	static char		*tmp[1024 + 1];
	char			buf[BUFF_SIZE + 1];
	char			*holder;
	int				i;

	i = 0;
	if (read(fd, buf, 0) < 0 || !line || fd < 0)
		return (-1);
	if (tmp[fd] == NULL)
		tmp[fd] = ft_strnew(0);
	while (!ft_strchr(tmp[fd], '\n') && (i = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[i] = '\0';
		holder = ft_strjoin(tmp[fd], buf);
		free(tmp[fd]);
		tmp[fd] = holder;
	}
	if (i == 0 && (tmp[fd] == NULL || tmp[fd][i] == '\0'))
		return (0);
	return (read_lines(tmp, line, fd));
}
