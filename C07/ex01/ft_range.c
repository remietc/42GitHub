/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 23:47:46 by retcheba          #+#    #+#             */
/*   Updated: 2022/03/04 00:19:18 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	i;

	i = 0;
	dest = NULL;
	if (min >= max)
		return (dest);
	dest = malloc((max - min) * sizeof(int));
	while (min < max)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (dest);
}
