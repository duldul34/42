/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:15:33 by ryoon             #+#    #+#             */
/*   Updated: 2022/07/22 13:58:48 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	char	find;
	int		i;

	find = (unsigned char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == find)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == find)
		return ((char *)s + i);
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s)
		return (0);
	sub = (char *)malloc(sizeof(char) * len + 1);
	if (!sub)
		return (0);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	ft_strlcpy(sub, &s[start], len + 1);
	return (sub);
}

char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*new_ptr;

	len = 0;
	while (s[len])
		len++;
	new_ptr = (char *)malloc(sizeof(char) * (len + 1));
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

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (dstsize == 0)
		return (src_len);
	i = 0;
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
