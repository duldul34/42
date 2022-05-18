/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 03:18:15 by ryoon             #+#    #+#             */
/*   Updated: 2022/05/19 03:22:24 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join_str;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (!s1 || !s2)
		return (0);
	join_str = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!join_str)
		return (0);
	ft_strlcpy(join_str, s1, s1_len + 1);
	ft_strlcat(join_str + (s1_len), s2, s2_len + 1);
	return (join_str);
}
