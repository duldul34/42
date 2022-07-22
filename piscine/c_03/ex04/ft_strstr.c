/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 12:09:59 by ryoon             #+#    #+#             */
/*   Updated: 2022/01/13 13:31:32 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	str_idx;
	int	to_find_idx;

	if (*to_find == '\0')
		return (str);
	str_idx = 0;
	while (str[str_idx] != '\0')
	{
		to_find_idx = 0;
		while (str[str_idx + to_find_idx] == to_find[to_find_idx])
		{
			to_find_idx++;
			if (to_find[to_find_idx] == '\0')
				return (&str[str_idx]);
		}
		str_idx++;
	}
	return (0);
}
