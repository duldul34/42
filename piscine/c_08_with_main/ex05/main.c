/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:40:21 by ryoon             #+#    #+#             */
/*   Updated: 2022/01/25 12:54:31 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

extern struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
extern void					*ft_show_tab(struct s_stock_str *par);

int	main(int argc, char **argv)
{
	int					i;
	struct s_stock_str	*stock;

	stock = ft_strs_to_tab(argc, argv);
	ft_show_tab(stock);
	i = 0;
	while (stock[i].str != 0)
	{
		free(stock[i].copy);
		i++;
	}
	free(stock);
	return (0);
}
