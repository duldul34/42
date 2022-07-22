/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 16:24:09 by ryoon             #+#    #+#             */
/*   Updated: 2022/01/08 16:24:14 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern void	ft_putchar(char a);

int	check(int i, int j, int row, int column)
{
	int	count;

	count = 0;
	if (i == 0 || i == row - 1)
	{
		count++;
	}
	if (j == 0 || j == column - 1)
	{
		count++;
	}
	return (count);
}

void	rush_putchar(int i, int j, int row, int column)
{
	if (check(i, j, row, column) > 1)
	{
		ft_putchar('o');
	}
	else if (check(i, j, row, column) == 1)
	{
		if (j == 0 || j == column - 1)
		{
			ft_putchar('-');
		}
		else
		{
			ft_putchar('|');
		}
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int		i;
	int		j;

	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			rush_putchar(i, j, x, y);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
