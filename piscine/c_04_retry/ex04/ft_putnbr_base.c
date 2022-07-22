/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:24:40 by ryoon             #+#    #+#             */
/*   Updated: 2022/01/18 17:14:27 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	nbr_long;

	base_len = 0;
	nbr_long = (long) nbr;
	if (check_base(base) == 1)
	{
		while (base[base_len] != '\0')
			base_len++;
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr_long = -nbr_long;
		}
		if (nbr_long < base_len)
			ft_putchar(base[nbr_long]);
		if (nbr_long >= base_len)
		{
			ft_putnbr_base(nbr_long / base_len, base);
			ft_putnbr_base(nbr_long % base_len, base);
		}
	}
}
