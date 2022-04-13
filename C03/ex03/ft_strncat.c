/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 23:11:24 by retcheba          #+#    #+#             */
/*   Updated: 2022/02/25 00:02:33 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_length1(char *str);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				ldest;
	unsigned int	i;

	ldest = str_length1(dest);
	i = 0;
	while (src[i] && i < nb)
	{
		dest[i + ldest] = src[i];
		i++;
	}
	dest[i + ldest] = '\0';
	return (dest);
}

int	str_length1(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
