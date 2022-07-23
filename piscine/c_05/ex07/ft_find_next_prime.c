/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:52:31 by ryoon             #+#    #+#             */
/*   Updated: 2022/01/20 14:05:44 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long long	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i * i <= nb && i <= 46340)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	long long	i;

	if (nb < 2)
		return (2);
	i = nb;
	while (!ft_is_prime(i))
		i++;
	return (i);
}
