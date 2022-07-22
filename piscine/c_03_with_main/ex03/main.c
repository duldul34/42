/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 11:40:34 by ryoon             #+#    #+#             */
/*   Updated: 2022/01/13 17:25:19 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
extern char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char	src[50] = "This is source";
	char	dest[50] = "This is destination";
	unsigned int		nb = 5;

	ft_strncat(dest, src, nb);
	printf("%s\n%s\n", dest, src);
}
