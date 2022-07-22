/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:39:27 by ryoon             #+#    #+#             */
/*   Updated: 2022/01/20 13:29:23 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt_recursive(long long i, int nb)
{
	if (i * i >= nb || i >= 46340)
		return (i);
	return (ft_sqrt_recursive(++i, nb));
}

int	ft_sqrt(int nb)
{
	long long	i;

	i = 1;
	if (nb == 0)
		return (0);
	i = ft_sqrt_recursive(i, nb);
	if (i * i == nb)
		return (i);
	else
		return (0);
}

int	ft_is_prime(int nb)
{
	long long	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
