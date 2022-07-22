/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 03:11:11 by ryoon             #+#    #+#             */
/*   Updated: 2022/05/19 15:47:25 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
