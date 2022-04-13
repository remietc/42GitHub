/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve_game_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 02:14:43 by retcheba          #+#    #+#             */
/*   Updated: 2022/02/27 14:31:32 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	fill_holes_row(int (*int_box)[4])
{
	int	i;
	int	j;
	int	counter_of_0;
	int	loc_of_0;

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
				loc_of_0 = j;
			}
			j++;
		}
		if (counter_of_0 == 1)
			fill_the_hole_row(int_box, i, loc_of_0);
		i++;
		j = 0;
		counter_of_0 = 0;
	}
}

void	fill_holes_col(int (*int_box)[4])
{
	int	i;
	int	j;
	int	counter_of_0;
	int	loc_of_0;

	i = 0;
	j = 0;
	counter_of_0 = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			if (int_box[j][i] == 0)
			{
				counter_of_0++;
				loc_of_0 = j;
			}
			j++;
		}
		if (counter_of_0 == 1)
			fill_the_hole_col(int_box, i, loc_of_0);
		i++;
		j = 0;
		counter_of_0 = 0;
	}
}

void	fill_the_hole_row(int (*int_box)[4], int i, int loc_of_0)
{
	int_box[i][loc_of_0] = 10 - int_box[i][0] - int_box[i][1]
		- int_box[i][2] - int_box[i][3];
}

void	fill_the_hole_col(int (*int_box)[4], int i, int loc_of_0)
{
	int_box[loc_of_0][i] = 10 - int_box[0][i] - int_box[1][i]
		- int_box[2][i] - int_box[3][i];
}
