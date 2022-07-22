/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 12:18:39 by ryoon             #+#    #+#             */
/*   Updated: 2022/01/13 17:30:23 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

extern char *ft_strstr(char *str, char *to_find);

int main(void)
{
	char str[] = "abcD EFghijklmDEFnopqrstuvwxyz";
	char fnd[] = "DEF";
	printf("%s\n", ft_strstr(str, fnd));
	printf("%s", strstr(str, fnd));
}	
