/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 19:10:45 by rcabezas          #+#    #+#             */
/*   Updated: 2021/03/11 12:49:46 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_strjoinb(char *s, char c)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc(ft_strlen(s) + 2);
	while (s[i] != '\0')
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = c;
	dest[i + 1] = '\0';
	free(s);
	return (dest);
}

int	get_next_line(int fd, char **line)
{
	int		ret;
	char	*buf;

	ret = 0;
	buf = malloc(2);
	*line = ft_strdup("");
	if (line == '\0' || *line != "")
		return (-1);
	while (read(fd, buf, 1) > 0)
	{
		ret = read(fd, buf, 1);
		if (buf[0] == '\n')
			break ;
		*line = ft_strjoinb(*line, buf[0]);
	}
	free(buf);
	return (ret);
}
