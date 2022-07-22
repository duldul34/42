/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 09:55:39 by ryoon             #+#    #+#             */
/*   Updated: 2022/01/26 16:47:41 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_lib.h"

int	ft_atoi(char *str)
{
	int	idx;
	int	minus;
	int	num;

	idx = 0;
	minus = 1;
	num = 0;
	while ((str[idx] >= 9 && str[idx] <= 13) || str[idx] == ' ' \
			|| str[idx] == '-' || str[idx] == '+')
		idx++;
	while (str[idx] != '\0' && (str[idx] >= '0' && str[idx] <= '9'))
	{
		num = num * 10 + (str[idx] - '0');
		idx++;
	}
	return (num);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*result;
	int		size;
	int		i;

	size = 0;
	i = 0;
	while (src[size] != '\0')
		size++;
	result = malloc(sizeof(char) * (size + 1));
	if (!result)
		return (0);
	while (src[i] != '\0')
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	*ft_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (*s == '\0')
			return (0);
		s++;
	}
	return ((char *)s);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
