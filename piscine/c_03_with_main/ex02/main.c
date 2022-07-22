/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 11:40:34 by ryoon             #+#    #+#             */
/*   Updated: 2022/01/13 16:56:17 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

extern char *ft_strcat(char *dest, char *src);

int main(void)
{
	char	src[50] = "This is source";
	char	dest[50] = "dest";

	//ft_strcat(dest, src);	
	strcat(dest, src);
	printf("%s\n%s\n", dest, src);
}
