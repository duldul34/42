/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 02:58:50 by ryoon             #+#    #+#             */
/*   Updated: 2022/05/19 17:30:56 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ck_overflow(long result)
{
	if (result > 2147483647)
		return (-1);
	if (result < -2147483648)
		return (0);
	return (1);
}

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		sign;
	long	result;

	i = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	sign = 1;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	if (!ft_isdigit(nptr[i]))
		return (0);
	result = 0;
	while (ft_isdigit(nptr[i]))
	{
		result = result * 10 + (sign * (nptr[i] - '0'));
		if (ck_overflow(result) <= 0)
			return (ck_overflow(result));
		i++;
	}
	return ((int)result);
}
