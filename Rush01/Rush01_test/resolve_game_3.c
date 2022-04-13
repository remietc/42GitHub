/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve_game_3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 14:30:27 by retcheba          #+#    #+#             */
/*   Updated: 2022/02/27 14:37:38 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	comb_int_box_2_4_part1(int *ext_box, int (*int_box)[4])
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if ((ext_box[i] == 3) && (int_box[0][i] == 2)
			&& (int_box[2][i] == 4) && i < 4)
		{
			int_box[1][i] = 3;
		}
		if ((ext_box[i] == 3) && (int_box[3][i - 4] == 2)
			&& (int_box[1][i - 4] == 4) && i > 3 && i < 8)
		{
			int_box[2][i - 4] = 3;
		}
		i++;
	}
}

void	comb_int_box_2_4_part2(int *ext_box, int (*int_box)[4])
{
	int	i;

	i = 8;
	while (i < 16)
	{
		if ((ext_box[i] == 3) && (int_box[i - 8][0] == 2)
			&& (int_box[i - 8][2] == 4) && i > 7 && i < 12)
		{
			int_box[i - 8][1] = 3;
		}
		if ((ext_box[i] == 3) && (int_box[i - 12][3] == 2)
			&& (int_box[i - 12][1] == 4) && i > 11 && i < 16)
		{
			int_box[i - 12][2] = 3;
		}
		i++;
	}
}
