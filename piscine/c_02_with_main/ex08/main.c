/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 13:27:21 by ryoon             #+#    #+#             */
/*   Updated: 2022/01/16 13:38:52 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

extern char	*ft_strlowcase(char *str);

int main(void)
{
	char str[10] = "abc123dEF";

	printf("%s\n", ft_strlowcase(str));
}	
