/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 13:03:08 by ryoon             #+#    #+#             */
/*   Updated: 2022/01/13 16:52:42 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

extern int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	s1[10] = "abc";
	char	s2[10] = "abcDDD";
	int		n = 3;
	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d\n", strncmp(s1, s2, n));
}
