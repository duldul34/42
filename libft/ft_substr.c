/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 00:37:22 by ryoon             #+#    #+#             */
/*   Updated: 2022/05/19 02:05:01 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_size(char const *s, unsigned int start, size_t len)
{
	int	s_len;

	s_len = ft_strlen(s);
	if ((size_t)s_len < (size_t)start + len)
		return ((size_t)(s_len - start + 1));
	else
		return (len + 1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size;
	char	*substr;

	if (!s)
		return (0);
	size = get_size(s, start, len);
	substr = (char *)malloc(sizeof(char) * size);
	if (!substr)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			substr[j] = s[i];
			j++;
		}
		i++;
	}
	substr[j] = '\0';
	return (substr);
}
