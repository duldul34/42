/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:21:29 by ryoon             #+#    #+#             */
/*   Updated: 2022/01/26 16:47:57 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include "ft_lib.h"
#include "read_map.h"

char	*get_map_y(char *map_info)
{
	int		map_info_len;
	char	*map_y_str;

	map_y_str = ft_strdup(map_info);
	map_info_len = ft_strlen(map_info);
	map_y_str[map_info_len - 3] = '\0';
	return (map_y_str);
}

char	*read_file(char *file_name)
{
	int		fd;
	int		n;
	char	*result_buf;
	char	*result_pos;

	fd = open(file_name, O_RDONLY);
	if (fd < 0)
		return (0);
	result_buf = (char *)malloc(sizeof(char) * 1024);
	result_pos = result_buf;
	while (1)
	{
		n = read(fd, result_buf, 1);
		if (n == -1 || *result_buf == EOF || *result_buf == '\0')
			break ;
		result_buf++;
	}
	free (result_pos);
	return (result_pos);
}

char	**make_map_info_arr(char *file_name)
{
	int		i;
	char	*pos;
	char	*find;
	char	*map_y_str;
	char	**map_info;

	pos = read_file(file_name);
	find = ft_strchr(pos, '\n');
	if (find == 0 && *find == '\0')
		return (0);
	*find = '\0';
	map_info = malloc(sizeof(char *) * 4);
	map_y_str = get_map_y(pos);
	map_info[0] = map_y_str;
	i = 1;
	while (i < 4)
	{
		map_info[i] = malloc(sizeof(char) * 2);
		map_info[i][0] = pos[ft_strlen(map_y_str) + i - 1];
		map_info[i][1] = '\0';
		i++;
	}
	*find = '\n';
	return (map_info);
}

char	**make_map_arr(char **map_info, char *pos)
{
	int		map_y;
	int		i;
	char	*find;
	char	**map;

	find = ft_strchr(pos, '\n');
	if (find == 0 && *find == '\0')
		return (0);
	*find = '\0';
	pos = ++find;
	i = 0;
	map_y = ft_atoi(map_info[0]);
	map = malloc(sizeof(char *) * map_y);
	while (i < map_y)
	{
		find = ft_strchr(pos, '\n');
		if (find == 0 && *find == '\0')
			return (0);
		*find = '\0';
		map[i] = ft_strdup(pos);
		pos = ++find;
		i++;
	}
	return (map);
}

void	free_map(char **map, int map_y)
{
	int	i;

	i = 0;
	while (i < map_y)
	{
		free(map[i]);
		i++;
	}
	free(map);
}
