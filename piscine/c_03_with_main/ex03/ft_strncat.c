/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 11:58:40 by ryoon             #+#    #+#             */
/*   Updated: 2022/01/13 17:24:27 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_idx;
	unsigned int	src_idx;

	dest_idx = 0;
	src_idx = 0;
	while (dest[dest_idx] != '\0')
		dest_idx++;
	while (src[src_idx] != '\0' && src_idx < nb)
	{
		dest[dest_idx] = src[src_idx];
		src_idx++;
		dest_idx++;
	}
	dest[dest_idx] = '\0';
	return (dest);
}
