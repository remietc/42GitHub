/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve_main_game_0.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luserbu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 21:13:41 by luserbu           #+#    #+#             */
/*   Updated: 2022/02/27 12:05:09 by hperret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_easy_1_0(int *ext_box, int (*int_box)[4])
{
	if ((ext_box[2] == 2) && (ext_box[6] == 2))
		int_box[0][2] = 3;
	int_box[1][2] = 4;
	int_box[2][2] = 1;
	int_box[3][2] = 2;
	if ((ext_box[10] == 2) && (ext_box[14] == 2))
		int_box[2][0] = 3;
	int_box[2][1] = 4;
	int_box[2][2] = 1;
	int_box[2][3] = 2;
	if ((ext_box[7] == 2) && ext_box[15] == 2)
		int_box[3][3] = 3;
}

void	ft_easy_2_0(int *ext_box, int (*int_box)[4])
{
	if ((ext_box[1] == 2) && (ext_box[5] == 2))
		int_box[0][1] = 3;
	int_box[1][1] = 4;
	int_box[2][1] = 1;
	int_box[3][1] = 2;
	if ((ext_box[10] == 2) && (ext_box[14] == 2))
		int_box[2][3] = 3;
	int_box[2][2] = 4;
	int_box[2][1] = 1;
	int_box[2][0] = 2;
	if ((ext_box[11] == 2) && ext_box[4] == 2)
		int_box[3][0] = 3;
}

void	ft_easy_3_0(int *ext_box, int (*int_box)[4])
{
	if ((ext_box[1] == 2) && (ext_box[5] == 2))
		int_box[3][1] = 3;
	int_box[2][1] = 4;
	int_box[1][1] = 1;
	int_box[0][1] = 2;
	if ((ext_box[9] == 2) && (ext_box[13] == 2))
		int_box[1][3] = 3;
	int_box[1][2] = 4;
	int_box[1][1] = 1;
	int_box[1][0] = 2;
	if ((ext_box[0] == 2) && ext_box[8] == 2)
		int_box[0][0] = 3;
}

void	ft_easy_4_0(int *ext_box, int (*int_box)[4])
{
	if ((ext_box[9] == 2) && (ext_box[13] == 2))
		int_box[1][0] = 3;
	int_box[1][1] = 4;
	int_box[1][2] = 1;
	int_box[1][3] = 2;
	if ((ext_box[2] == 2) && (ext_box[6] == 2))
		int_box[3][2] = 3;
	int_box[2][2] = 4;
	int_box[1][2] = 1;
	int_box[0][2] = 2;
	if ((ext_box[3] == 2) && ext_box[12] == 2)
		int_box[0][3] = 3;
}
