/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:15:43 by ryoon             #+#    #+#             */
/*   Updated: 2022/01/22 12:31:04 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*result;

	if (min >= max)
		return (0);
	result = (int *)malloc(sizeof(int) * (max - min));
	if (!result)
		return (0);
	i = 0;
	while (min < max)
	{
		result[i] = min;
		i++;
		min++;
	}
	return (result);
}
