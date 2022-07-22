/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 13:38:01 by ryoon             #+#    #+#             */
/*   Updated: 2022/01/13 17:15:08 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

extern unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	char	dest[30] = "123";
	char	src[30] = "456789";

	unsigned int	result = ft_strlcat(dest, src, 2);
	printf("dest = %s\nresult = %d", dest, result);
}
