/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:52:31 by ryoon             #+#    #+#             */
/*   Updated: 2022/01/20 12:36:54 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_find_next_prime_recursive(long long i)
{
	if (ft_is_prime(i))
		return (i);
	return (ft_find_next_prime_recursive(++i));
}

int	ft_find_next_prime(int nb)
{
	long long	i;

	if (nb < 2)
		return (2);
	i = nb;
	i = ft_find_next_prime_recursive(i);
	return (i);
}
