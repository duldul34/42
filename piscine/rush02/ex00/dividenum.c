/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dividenum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 16:18:08 by ryoon             #+#    #+#             */
/*   Updated: 2022/01/22 19:16:13 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_lib.h"

char key[100][100] = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10",
	"11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "30", "40", "100",
	"1000", "1000000" };
char value[100][100] = { "zero", "one", "two", "three", "four", "five",
	"six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen",
	"fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen",
	"twenty", "thirty", "forty", "hundred", "thousand", "million" };

void cal_num(unsigned int num, int ttt, int mult)
{
	int	i;

	i = 0;
	while (i < 26)
	{
		//printf("i, num, ttt: %d, %d, %d\n", i, num, ttt); 
		if (key[i] == num && ttt < 10)
		{
			printf("%s", value[i]);
			printf(" ");
		}

		if (key[i] == num * ttt && (ttt >= 10 && ttt < 100))
		{
			printf("%s", value[i]);
			printf(" ");
		}
		
		if (ttt == 100)
		{
			if (key[i] == num && num != 0)
			{	
				printf("%s", value[i]);	
				printf(" ");
			}
			if (key[i] == ttt && ttt >= 100)
			{	
				printf("%s", value[i]);	
				printf(" ");
			}
		}

		if (ttt > 100)
		{
		
			if (key[i] == ttt)
				printf("%s", value[i]);
		}
		
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	divide_num(char *num, int ttt, int mult)
{
	int	len;

	len = ft_strlen(num);
	if (len % 3 == 0)
	{
		
	}
	else if (len % 3 = 1)
	{}
	else
	{}
}

int	main(void)
{
	char	*num = "7654321";
	divide_num(num);
}

