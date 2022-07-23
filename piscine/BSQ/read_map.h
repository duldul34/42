/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:21:29 by ryoon             #+#    #+#             */
/*   Updated: 2022/01/26 10:47:10 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READ_MAP_H
# define READ_MAP_H

char	*get_map_y(char *map_info);
char	*read_file(char *file_name);
char	**make_map_info_arr(char *file_name);
char	**make_map_arr(char **map_info, char *pos);
void	free_map(char **map, int map_y);

#endif
