/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 14:24:22 by ryoon             #+#    #+#             */
/*   Updated: 2022/01/16 17:03:09 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

extern void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "Coucou\ttu vas bien ?";
	str2 = "\x01\x02oucou\x7f\x80\x81\xfe\xff";
	ft_putstr_non_printable(str1);
	printf("\n");
	ft_putstr_non_printable(str2);
	printf("\n");
}
