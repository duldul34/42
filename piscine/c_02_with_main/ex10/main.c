/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 12:50:34 by ryoon             #+#    #+#             */
/*   Updated: 2022/01/16 16:59:52 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

extern unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
	char dest[50] = "abcdef";
	char src[50] = "GHIJK";
	int size = 3;

	int result = ft_strlcpy(dest, src, size);
	printf("%s\n%d\n", dest, result);
}	
