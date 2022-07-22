/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 12:50:34 by ryoon             #+#    #+#             */
/*   Updated: 2022/01/16 13:03:04 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

extern char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char dest[] = "abc";
	char src[] = "def";
	int n = 2;

	strncpy(dest, src, n);
	printf("%s\n%s\n", dest, src);
}	
