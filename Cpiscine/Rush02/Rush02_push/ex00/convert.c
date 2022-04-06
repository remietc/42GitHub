/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rledoux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 20:51:52 by rledoux           #+#    #+#             */
/*   Updated: 2022/03/06 18:19:00 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

void	convert(t_llui *tab, int size, t_llui *tab_numb, char (*tab_word)[15])
{
	int		i;
	int		j;
	int		p;
	char	to_print[500];

	p = 0;
	while (size >= 0)
	{
		i = 0;
		while (tab_numb[i] != tab[size])
			i++;
		j = 0;
		while (tab_word[i][j] != '\0')
		{
			to_print[p] = tab_word[i][j];
			j++;
			p++;
		}
		to_print[p] = ' ';
		p++;
		size--;
	}
	to_print[p - 1] = '\0';
	ft_putstr(to_print);
}
