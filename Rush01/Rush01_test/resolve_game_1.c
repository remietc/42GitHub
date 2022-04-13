/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve_game_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 23:16:07 by retcheba          #+#    #+#             */
/*   Updated: 2022/02/27 01:54:14 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	comb_1_3(int *ext_box, int (*int_box)[4])
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if ((ext_box[i] == 1) && (ext_box[i + 4] == 3) && i < 4)
		{
			int_box[0][i] = 4;
		}
		if ((ext_box[i] == 1) && (ext_box[i - 4] == 3) && i > 3 && i < 8)
		{
			int_box[3][i - 4] = 4;
		}
		if ((ext_box[i] == 1) && (ext_box[i + 4] == 3) && i > 7 && i < 12)
		{
			int_box[i - 8][0] = 4;
		}
		if ((ext_box[i] == 1) && (ext_box[i - 4] == 3) && i > 11 && i < 16)
		{
			int_box[i - 12][3] = 4;
		}
		i++;
	}
}

void	comb_2_2_part1(int *ext_box, int (*int_box)[4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if ((ext_box[i] == 2) && (ext_box[i + 4] == 2)
			&& (int_box[0][i] == 3) && (int_box[1][i] == 4))
		{
			int_box[2][i] = 1;
			int_box[3][i] = 2;
		}
		if ((ext_box[i] == 2) && (ext_box[i + 4] == 2)
			&& (int_box[0][i] == 2) && (int_box[1][i] == 4))
		{
			int_box[2][i] = 1;
			int_box[3][i] = 3;
		}
		if ((ext_box[i] == 2) && (ext_box[i + 4] == 2)
			&& (int_box[0][i] == 1) && (int_box[1][i] == 4))
		{
			int_box[2][i] = 2;
			int_box[3][i] = 3;
		}
		i++;
	}
}

void	comb_2_2_part2(int *ext_box, int (*int_box)[4])
{
	int	i;

	i = 4;
	while (i > 3 && i < 8)
	{
		if ((ext_box[i] == 2) && (ext_box[i - 4] == 2)
			&& (int_box[3][i - 4] == 3) && (int_box[2][i - 4] == 4))
		{
			int_box[1][i - 4] = 1;
			int_box[0][i - 4] = 2;
		}
		if ((ext_box[i] == 2) && (ext_box[i - 4] == 2)
			&& (int_box[3][i - 4] == 2) && (int_box[2][i - 4] == 4))
		{
			int_box[1][i - 4] = 1;
			int_box[0][i - 4] = 3;
		}
		if ((ext_box[i] == 2) && (ext_box[i - 4] == 2)
			&& (int_box[3][i - 4] == 1) && (int_box[2][i - 4] == 4))
		{
			int_box[1][i - 4] = 2;
			int_box[0][i - 4] = 3;
		}
		i++;
	}
}

void	comb_2_2_part3(int *ext_box, int (*int_box)[4])
{
	int	i;

	i = 8;
	while (i > 7 && i < 12)
	{
		if ((ext_box[i] == 2) && (ext_box[i + 4] == 2)
			&& (int_box[i - 8][0] == 3) && (int_box[i - 8][1] == 4))
		{
			int_box[i - 8][2] = 1;
			int_box[i - 8][3] = 2;
		}
		if ((ext_box[i] == 2) && (ext_box[i + 4] == 2)
			&& (int_box[i - 8][0] == 2) && (int_box[i - 8][1] == 4))
		{
			int_box[i - 8][2] = 1;
			int_box[i - 8][3] = 3;
		}
		if ((ext_box[i] == 2) && (ext_box[i + 4] == 2)
			&& (int_box[i - 8][0] == 1) && (int_box[i - 8][1] == 4))
		{
			int_box[i - 8][2] = 2;
			int_box[i - 8][3] = 3;
		}
		i++;
	}
}

void	comb_2_2_part4(int *ext_box, int (*int_box)[4])
{
	int	i;

	i = 12;
	while (i > 11 && i < 16)
	{
		if ((ext_box[i] == 2) && (ext_box[i - 4] == 2)
			&& (int_box[i - 12][3] == 3) && (int_box[i - 12][2] == 4))
		{
			int_box[i - 12][1] = 1;
			int_box[i - 12][0] = 2;
		}
		if ((ext_box[i] == 2) && (ext_box[i - 4] == 2)
			&& (int_box[i - 12][3] == 2) && (int_box[i - 12][2] == 4))
		{
			int_box[i - 12][1] = 1;
			int_box[i - 12][0] = 3;
		}
		if ((ext_box[i] == 2) && (ext_box[i - 4] == 2)
			&& (int_box[i - 12][3] == 1) && (int_box[i - 12][2] == 4))
		{
			int_box[i - 12][1] = 2;
			int_box[i - 12][0] = 3;
		}
		i++;
	}
}
