/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 02:07:25 by ryoon             #+#    #+#             */
/*   Updated: 2022/05/19 02:13:46 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*last;
	unsigned char	find;
	size_t			i;

	last = (unsigned char *)s;
	find = (unsigned char)c;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (last[i] == find)
			return ((char *)(last + i));
		i--;
	}
	if (last[i] == find)
		return ((char *)last);
	return (0);
}
