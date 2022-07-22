/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 14:10:28 by ryoon             #+#    #+#             */
/*   Updated: 2022/01/16 15:46:57 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(int hex_val, int flag)
{
	char	*base;

	base = "0123456789abcdef";
	if (hex_val <= 0 && flag == 0)
		hex_val += 256;
	if (hex_val >= 16)
	{
		ft_puthex(hex_val / 16, 1);
		ft_puthex(hex_val % 16, 1);
	}
	else
	{
		if (flag == 0)
			ft_putchar('0');
		ft_putchar(base[hex_val]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			ft_puthex(str[i], 0);
		}
		i++;
	}
}
