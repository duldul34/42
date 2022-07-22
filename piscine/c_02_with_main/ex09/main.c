/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 13:27:21 by ryoon             #+#    #+#             */
/*   Updated: 2022/01/16 16:57:35 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

extern char	*ft_strcapitalize(char *str);

int main(void)
{
	char str[100] = "79salut, ComCCnt Tu vas ? 42Mots quarante-DeUx; cinquante+et+un";

	printf("%s\n", ft_strcapitalize(str));
}	
