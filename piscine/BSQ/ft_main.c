/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 10:02:19 by ryoon             #+#    #+#             */
/*   Updated: 2022/01/26 16:46:58 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include "ft_lib.h"
#include "ft_lib2.h"
#include "read_map.h"
#include "check_map_error.h"

void	print_map(char **map_info, char **map)
{
	int	i;

	i = 0;
	while (i < ft_atoi(get_map_y(map_info[0])))
	{
		ft_putstr(map[i]);
		ft_putchar('\n');
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	char	*pos;
	char	**map_info;
	char	**map;

	i = 1;
	while (i < argc)
	{
		pos = read_file(argv[i]);
		if (check_map_info_error(pos))
		{
			map_info = make_map_info_arr(argv[i]);
			map = make_map_arr(map_info, pos);
			if (check_map_error(map_info, map))
				print_map(map_info, map);
		}
		free_map(map, ft_atoi(map_info[0]));
		i++;
	}
}
