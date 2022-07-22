/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 13:28:50 by ryoon             #+#    #+#             */
/*   Updated: 2022/01/16 13:31:41 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

extern int	ft_str_is_printable(char *str);

int main(void)
{
	char str[] = "iA";

	printf("%d\n", ft_str_is_printable(str));
}	
