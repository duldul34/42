/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:04:02 by ryoon             #+#    #+#             */
/*   Updated: 2022/01/13 13:22:58 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	dest_idx;
	int	src_idx;

	dest_idx = 0;
	src_idx = 0;
	while (dest[dest_idx] != '\0')
		dest_idx++;
	while (src[src_idx] != '\0')
	{
		dest[dest_idx + src_idx] = src[src_idx];
		src_idx++;
	}
	dest[dest_idx + src_idx] = '\0';
	return (dest);
}
