/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve_game_5.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 16:31:14 by retcheba          #+#    #+#             */
/*   Updated: 2022/02/27 18:14:26 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	comb_2_2_part1_option2(int *ext_box, int (*int_box)[4])
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if ((ext_box[i] == 2) && (ext_box[i + 4] == 2)
			&& (int_box[3][i] == 3) && (int_box[1][i] == 4)
			&& i < 4)
		{
			int_box[0][i] = 2;
			int_box[2][i] = 1;
		}
		if ((ext_box[i] == 2) && (ext_box[i - 4] == 2)
			&& (int_box[0][i - 4] == 3) && (int_box[2][i - 4] == 4)
			&& i > 3 && i < 8)
		{
			int_box[3][i - 4] = 2;
			int_box[1][i - 4] = 1;
		}
		i++;
	}
}

void	comb_2_2_part2_option2(int *ext_box, int (*int_box)[4])
{
	int	i;

	i = 8;
	while (i > 7 && i < 16)
	{
		if ((ext_box[i] == 2) && (ext_box[i + 4] == 2)
			&& (int_box[i - 8][3] == 3) && (int_box[i - 8][1] == 4)
			&& i > 7 && i < 12)
		{
			int_box[i - 8][0] = 2;
			int_box[i - 8][2] = 1;
		}
		if ((ext_box[i] == 2) && (ext_box[i - 4] == 2)
			&& (int_box[i - 12][0] == 3) && (int_box[i - 12][2] == 4)
			&& i > 11 && i < 16)
		{
			int_box[i - 12][3] = 2;
			int_box[i - 12][1] = 1;
		}
		i++;
	}
}
