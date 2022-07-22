/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 12:50:34 by ryoon             #+#    #+#             */
/*   Updated: 2022/01/16 12:54:30 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

extern char *ft_strcpy(char *dest, char *src);

int main(void)
{
	char dest[] = "abc";
	char src[] = "def";
	
	strcpy(dest, src);
	printf("%s\n%s\n", dest, src);
}	
