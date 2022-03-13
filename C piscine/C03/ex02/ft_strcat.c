/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 23:11:24 by retcheba          #+#    #+#             */
/*   Updated: 2022/02/24 23:33:49 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_length(char *str);

char	*ft_strcat(char *dest, char *src)
{
	int	ldest;
	int	i;

	ldest = str_length(dest);
	i = 0;
	while (src[i])
	{
		dest[i + ldest] = src[i];
		i++;
	}
	dest[i + ldest] = '\0';
	return (dest);
}

int	str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
