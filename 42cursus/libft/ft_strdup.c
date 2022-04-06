/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:23:45 by retcheba          #+#    #+#             */
/*   Updated: 2022/04/05 19:53:59 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dst;
	size_t	size;

	size = ft_strlen(s) + 1;
	dst = malloc(sizeof(unsigned char) * size);
	dst = ft_memmove(dst, s, size);
	return (dst);
}
