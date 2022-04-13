/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:28:46 by retcheba          #+#    #+#             */
/*   Updated: 2022/02/28 16:10:07 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (*to_find == 0)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			while (str[i] == to_find[i] && to_find[i])
			{
				i++;
			}
			if (to_find[i] == 0)
				return (str);
			else
				i = 0;
		}
		str++;
	}
	return (0);
}
