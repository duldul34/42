/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 12:50:34 by ryoon             #+#    #+#             */
/*   Updated: 2022/01/16 13:19:54 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

extern int	ft_str_is_alpha(char *str);

int main(void)
{
	char str[] = "";

	printf("%d\n", ft_str_is_alpha(str));
}	