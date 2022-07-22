/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_error.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 11:19:51 by ryoon             #+#    #+#             */
/*   Updated: 2022/01/26 13:37:41 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_lib.h"
#include "ft_lib2.h"

int	check_line(char *line, int map_x)
{
	if (ft_strlen(line) != map_x)
		return (0);
	return (1);
}

int	check_map_y(char *pos)
{
	int	i;
	int	map_y_len;

	i = 0;
	map_y_len = ft_strlen(pos) - 3;
	while (i < map_y_len && pos[i] != '\0')
	{
		if (pos[i] < '0' || pos[i] > '9')
			return (0);
		i++;
	}
	return (map_y_len);
}

int	check_map_info_error(char *pos)
{
	int		i;
	int		j;
	int		map_y_len;
	char	*find;

	find = ft_strchr(pos, '\n');
	if (find == 0 && *find == '\0')
		return (0);
	*find = '\0';
	map_y_len = check_map_y(pos);
	if (!map_y_len)
		return (0);
	i = map_y_len;
	while (pos[i] != '\0')
	{
		j = i + 1;
		while (j < ft_strlen(pos))
		{
			if (pos[i] == pos[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_map_error(char **map_info, char **map)
{
	int	i;
	int	j;
	int	map_y;
	int	map_x;

	map_y = ft_atoi(map_info[0]);
	if (map_y == 0)
		return (0);
	map_x = ft_strlen(map[0]);
	i = 0;
	while (i < map_y)
	{
		if (ft_strlen(map[i]) != map_x)
			return (0);
		j = 0;
		while (map[i][j] != '\0')
		{
			if (map[i][j] != map_info[1][0] && map[i][j] != map_info[2][0] &&
				map[i][j] != map_info[3][0])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
