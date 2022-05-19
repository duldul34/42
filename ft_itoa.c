/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 03:46:24 by ryoon             #+#    #+#             */
/*   Updated: 2022/05/19 03:46:24 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

void	process(int n, char *str, int len)
{
	str[len--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n)
	{
		str[len] = n % 10 + '0';
		len--;
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = ft_count_len(n);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	if (n == -2147483648)
	{
		ft_strlcpy(str, "-2147483648", (size_t)(len + 1));
		return (str);
	}
	process (n, str, len);
	return (str);
}
