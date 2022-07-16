/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:15:33 by ryoon             #+#    #+#             */
/*   Updated: 2022/07/16 17:17:11 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (s == NULL)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*new_ptr;

	len = (int) ft_strlen(s);
	new_ptr = (char *)malloc(sizeof (char) * len + 1);
	if (!(new_ptr))
		return (0);
	i = 0;
	while (s[i])
	{
		new_ptr[i] = s[i];
		i++;
	}
	new_ptr[i] = '\0';
	return (new_ptr);
}

char	*ft_strjoin(char *s1, char const *s2)
{
	char	*join_str;
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (0);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	join_str = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!join_str)
		return (0);
	i = 0;
	while (i < s1_len)
	{
		join_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < s2_len)
		join_str[i++] = s2[j++];
	join_str[i] = '\0';
	return (join_str);
}

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*first_occurence;

	i = 0;
	first_occurence = NULL;
	if (!s)
		return (NULL);
	if (c == 0)
		return ((char *)&s[ft_strlen(s)]);
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			first_occurence = (char *)&s[i];
			break ;
		}
		i++;
	}
	return (first_occurence);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size;
	char	*substr;

	if (!s)
		return (0);
	size = ft_strlen(s);
	if (size < (size_t)start + len)
		size = ((size_t)(size - start + 1));
	else
		size = len + 1;
	substr = (char *)malloc(sizeof(char) * size);
	if (!substr)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
			substr[j++] = s[i];
		i++;
	}
	substr[j] = '\0';
	return (substr);
}
