/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolution.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:28:40 by retcheba          #+#    #+#             */
/*   Updated: 2022/03/09 21:27:34 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	resolution2(char **tab, int *xy_ihl, int *xyl, int *hl);
void	print_tab(char **tab, int *hl);
void	check_tab(char **tab, int *xy_ihl, int *hl);
void	resolve_tab(char **tab, int i_h, int i_l, int *xy);

void	resolution(char **tab, int l, int h)
{
	int	xy_ihl[4];
	int	xyl[3];
	int	hl[2];

	xy_ihl[0] = 0;
	xy_ihl[1] = 0;
	xy_ihl[2] = 0;
	xy_ihl[3] = 0;
	xyl[0] = 0;
	xyl[1] = 0;
	xyl[2] = (xy_ihl[3] - xy_ihl[0]);
	hl[0] = h;
	hl[1] = l;
	resolution2(tab, xy_ihl, xyl, hl);
	resolve_tab(tab, (xyl[1] + xyl[2]), (xyl[0] + xyl[2]), xyl);
	print_tab(tab, hl);
}

void	resolution2(char **tab, int *xy_ihl, int *xyl, int *hl)
{
	int	i;

	i = -1;
	while (++i < (hl[0] * hl[1]))
	{
		check_tab(tab, xy_ihl, hl);
		xy_ihl[2]--;
		xy_ihl[3]--;
		if (xyl[2] < (xy_ihl[3] - xy_ihl[0]))
		{
			xyl[0] = xy_ihl[0];
			xyl[1] = xy_ihl[1];
			xyl[2] = (xy_ihl[3] - xy_ihl[0]);
		}
		if (xy_ihl[0] < hl[1] - 3)
			xy_ihl[0]++;
		else
		{
			xy_ihl[0] = 0;
			xy_ihl[1]++;
		}
		xy_ihl[2] = xy_ihl[1];
		xy_ihl[3] = xy_ihl[0];
	}
}

void	resolve_tab(char **tab, int i_h, int i_l, int *xy)
{
	int	i;
	int	j;

	i = xy[1];
	j = xy[0];
	while (i < i_h)
	{
		while (j < i_l)
		{
			tab[i][j] = 'x';
			j++;
		}
		i++;
		j = xy[0];
	}
}

void	check_tab(char **tab, int *xy_ihl, int *hl)
{
	int	i;
	int	j;
	int	pas_bon;

	pas_bon = 0;
	while (pas_bon == 0 && xy_ihl[2] < hl[0] && xy_ihl[3] < hl[1])
	{
		i = xy_ihl[1];
		j = xy_ihl[0];
		xy_ihl[2] += 1;
		xy_ihl[3] += 1;
		while (i < xy_ihl[2])
		{
			while (j < xy_ihl[3])
			{
				if (tab[i][j] == 'o' || tab[i][j] == '\n')
					pas_bon++;
				j++;
			}
			i++;
			j = xy_ihl[0];
		}
	}
}

void	print_tab(char **tab, int *hl)
{
	int	i;

	i = 0;
	while (i < hl[0])
	{
		ft_putstr(tab[i]);
		i++;
	}
}
