/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoon <ryoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 13:41:44 by ryoon             #+#    #+#             */
/*   Updated: 2022/01/16 17:19:35 by ryoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_to_capitalize;

	i = 0;
	is_to_capitalize = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{		
			if (is_to_capitalize)
				str[i] -= 32;
			is_to_capitalize = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			is_to_capitalize = 0;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			is_to_capitalize = 0;
		else
			is_to_capitalize = 1;
		i++;
	}
	return (str);
}
