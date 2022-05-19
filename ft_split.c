/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 03:30:26 by ryoon             #+#    #+#             */
/*   Updated: 2022/05/19 03:30:26 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_all(char **result)
{
	size_t	i;

	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}

static size_t	get_size(char const *s, char c)
{
	size_t	i;
	size_t	size;

	if (!s[0])
		return (0);
	i = 0;
	while (s[i] && s[i] == c)
		i++;
	size = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			size++;
			while (s[i] && s[i] == c)
				i++;
			continue ;
		}
		i++;
	}
	if (s[i - 1] != c)
		size++;
	return (size);
}

static size_t	count_next_len(char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (i);
}

static char	**make_result(char **result, char const *s, size_t size, char c)
{
	char	*str;
	size_t	next_str_len;
	size_t	i;

	str = (char *)s;
	next_str_len = 0;
	i = 0;
	while (i < size)
	{
		while (*str == c)
			str++;
		next_str_len = count_next_len(str, c);
		result[i] = (char *)malloc(sizeof(char) * (next_str_len + 1));
		if (!result[i])
			return (free_all(result));
		ft_strlcpy(result[i], str, next_str_len + 1);
		str += next_str_len;
		i++;
	}
	result[i] = 0;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	size;

	if (!s)
		return (0);
	size = get_size(s, c);
	result = (char **)malloc(sizeof(char *) * (size + 1));
	if (!result)
		return (0);
	return (make_result(result, s, size, c));
}
