/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 12:31:54 by ryoon             #+#    #+#             */
/*   Updated: 2022/01/13 12:56:21 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	src_idx;

	dest_len = 0;
	src_len = 0;
	src_idx = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (size < dest_len + 1)
		return (size + src_len);
	while (src[src_idx] != '\0' && dest_len + src_idx + 1 < size)
	{
		dest[dest_len + src_idx] = src[src_idx];
		src_idx++;
	}
	dest[dest_len + src_idx] = '\0';
	return (dest_len + src_len);
}
