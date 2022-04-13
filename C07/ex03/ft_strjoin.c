/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 23:32:32 by retcheba          #+#    #+#             */
/*   Updated: 2022/03/10 13:12:24 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strjoin2(char *str, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			str[k++] = strs[i][j++];
		i++;
		j = 0;
		if (i < size)
		{
			while (sep[j])
				str[k++] = sep[j++];
		}
	}
	str[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;

	if (size == 0)
	{
		str = NULL;
		return (str);
	}
	str = malloc(size * (sizeof(*strs) + sizeof(sep)));
	ft_strjoin2(str, size, strs, sep);
	return (str);
}
