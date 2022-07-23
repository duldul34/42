/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_error.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 12:37:16 by ryoon             #+#    #+#             */
/*   Updated: 2022/01/26 13:36:19 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_MAP_ERROR_H
# define CHECK_MAP_ERROR_H

int	check_line(char *line, int map_x);
int	check_map_info_error(char *pos);
int	check_map_error(char **map_info, char **map);

#endif
