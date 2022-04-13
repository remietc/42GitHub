/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_resolve_game.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 22:49:57 by retcheba          #+#    #+#             */
/*   Updated: 2022/02/27 18:19:02 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	resolve(int *ext_box, int (*int_box)[4])
{
	comb_const(ext_box, int_box);
	comb_var(ext_box, int_box);
	if (count_0(int_box) > 0)
		brut_force(ext_box, int_box);
}

void	comb_const(int *ext_box, int (*int_box)[4])
{
	comb_4_1_part1(ext_box, int_box);
	comb_4_1_part2(ext_box, int_box);
	comb_2_3(ext_box, int_box);
	comb_1_2_part1(ext_box, int_box);
	comb_1_2_part2(ext_box, int_box);
	comb_1_3(ext_box, int_box);
}

void	comb_var(int *ext_box, int (*int_box)[4])
{
	comb_2_2_part1(ext_box, int_box);
	comb_2_2_part2(ext_box, int_box);
	comb_2_2_part3(ext_box, int_box);
	comb_2_2_part4(ext_box, int_box);
	comb_int_box_2_4_part1(ext_box, int_box);
	comb_int_box_2_4_part2(ext_box, int_box);
	fill_holes_row(int_box);
	fill_holes_col(int_box);
}

int	count_0(int (*int_box)[4])
{
	int	i;
	int	j;
	int	counter_of_0;

	i = 0;
	j = 0;
	counter_of_0 = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			if (int_box[i][j] == 0)
			{
				counter_of_0++;
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (counter_of_0);
}

void	brut_force(int *ext_box, int (*int_box)[4])
{
	int	copie_tab1[4][4];
	int	copie_tab2[4][4];
	int	i;

	i = 0;
	while (i < 1)
	{
		if (i == 0)
		{
			copier_tab(copie_tab1, int_box);
			comb_2_2_part1_option1(ext_box, copie_tab1);
			comb_2_2_part2_option1(ext_box, copie_tab1);
			comb_var(ext_box, copie_tab1);
		}
		if (i == 1)
		{
			copier_tab(copie_tab2, int_box);
			comb_2_2_part1_option2(ext_box, copie_tab2);
			comb_2_2_part2_option2(ext_box, copie_tab2);
			comb_var(ext_box, copie_tab2);
		}
		i++;
	}
	copier_tab(int_box, copie_tab1);
}
