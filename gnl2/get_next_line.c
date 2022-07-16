/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:14:06 by ryoon             #+#    #+#             */
/*   Updated: 2022/07/16 18:39:45 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	free_str(char **s)
{
	free(*s);
	*s = NULL;
}

int	read_to_buff(int fd, char **s, char **buff)
{
	int		ret;
	char	*temp;

	ret = read(fd, *buff, BUFFER_SIZE);
	while (ret > 0)
	{
		(*buff)[ret] = '\0';
		if (*s == 0)
			*s = ft_strdup(*buff);
		else
		{
			temp = ft_strjoin(*s, *buff);
			free(*s);
			*s = temp;
		}
		if (ft_strchr(*s, '\n'))
			break ;
		ret = read(fd, *buff, BUFFER_SIZE);
	}
	free(*buff);
	return (ret);
}

char	*return_line(int ret, char **s)
{
	int		next_line_index;
	char	*temp;
	char	*line;

	if (ret < 0)
		return (0);
	else if (ret == 0 && *s == 0)
		return (0);
	next_line_index = (int)(ft_strchr(*s, '\n') - *s);
	if (ft_strchr(*s, '\n'))
	{
		line = ft_substr(*s, 0, next_line_index + 1);
		temp = ft_strdup(&((*s)[next_line_index + 1]));
		free(*s);
		*s = temp;
		if ((*s)[0] == '\0')
			free_str(s);
	}
	else
	{
		line = ft_strdup(*s);
		free_str(s);
	}
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*s;
	int			ret;
	char		*buff;

	if (fd < 0)
		return (0);
	buff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (buff == 0)
		return (0);
	ret = read_to_buff(fd, &s, &buff);
	return (return_line(ret, &s));
}
