/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:58:36 by ryoon             #+#    #+#             */
/*   Updated: 2022/01/11 14:22:13 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_combn(int n);
void	ft_print(int n, int *to_print);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int n, int *to_print)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (++i < n)
		if (to_print[i - 1] >= to_print[i])
			flag = 0;
	if (!flag)
		return ;
	i = -1;
	while (++i < n)
		ft_putchar(to_print[i] + 48);
	if (to_print[0] < (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int	to_print[10];
	int	i;

	i = -1;
	while (++i < n)
		to_print[i] = i;
	while (to_print[0] <= (10 - n))
	{
		ft_print(n, to_print);
		to_print[n - 1]++;
		i = n;
		while (i > 0)
		{
			i--;
			if (to_print[i] > 9)
			{
				to_print[i - 1]++;
				to_print[i] = 0;
			}
		}
	}
}
