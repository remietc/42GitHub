/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve_main_game.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hperret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 11:23:45 by hperret           #+#    #+#             */
/*   Updated: 2022/02/27 12:11:39 by hperret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	resolve_main(int *ext_box, int (*int_box)[4])
{
	if ((ext_box[0] == 4) && (ext_box[8] == 4))
	{	
		ft_easy_1(ext_box, int_box);
		ft_easy_1_0(ext_box, int_box);
	}
	if ((ext_box[3] == 4) && (ext_box[12] == 4))
	{	
		ft_easy_2(ext_box, int_box);
		ft_easy_2_0(ext_box, int_box);
	}
	if ((ext_box[15] == 4) && (ext_box[7] == 4))
	{	
		ft_easy_3(ext_box, int_box);
		ft_easy_3_0(ext_box, int_box);
	}
	if ((ext_box[11] == 4) && (ext_box[4] == 4))
	{	
		ft_easy_4(ext_box, int_box);
		ft_easy_4_0(ext_box, int_box);
	}
}

void	ft_easy_1(int *ext_box, int (*int_box)[4])
{
	if ((ext_box[0] == 4) || (ext_box[8] == 4))
		int_box[0][0] = 1;
	if ((ext_box[3] == 1) || (ext_box[12] == 1))
		int_box[0][3] = 4;
	if ((ext_box[11] == 1) || (ext_box[4] == 1))
		int_box[3][0] = 4;
	if ((ext_box[1] == 3) && (ext_box[5] == 2))
		int_box[0][1] = 2;
	int_box[1][1] = 3;
	int_box[2][1] = 4;
	int_box[3][1] = 1;
	if ((ext_box[9] == 3) && (ext_box[13] == 2))
		int_box[1][0] = 2;
	int_box[1][1] = 3;
	int_box[1][2] = 4;
	int_box[1][3] = 1;
}

void	ft_easy_2(int *ext_box, int (*int_box)[4])
{
	if ((ext_box[3] == 4) || (ext_box[12] == 4))
		int_box[0][3] = 1;
	if ((ext_box[0] == 1) || (ext_box[8] == 1))
		int_box[0][0] = 4;
	if ((ext_box[15] == 1) || (ext_box[7] == 1))
		int_box[3][3] = 4;
	if ((ext_box[2] == 3) && (ext_box[6] == 2))
		int_box[0][2] = 2;
	int_box[1][2] = 3;
	int_box[2][2] = 4;
	int_box[3][2] = 1;
	if ((ext_box[13] == 3) && (ext_box[9] == 2))
		int_box[1][3] = 2;
	int_box[1][2] = 3;
	int_box[1][1] = 4;
	int_box[1][0] = 1;
}

void	ft_easy_3(int *ext_box, int (*int_box)[4])
{
	if ((ext_box[15] == 4) || (ext_box[7] == 4))
		int_box[3][3] = 1;
	if ((ext_box[3] == 1) || (ext_box[12] == 1))
		int_box[0][3] = 4;
	if ((ext_box[11] == 1) || (ext_box[4] == 1))
		int_box[3][0] = 4;
	if ((ext_box[6] == 3) && (ext_box[2] == 2))
		int_box[3][2] = 2;
	int_box[2][2] = 3;
	int_box[1][2] = 4;
	int_box[0][2] = 1;
	if ((ext_box[14] == 3) && (ext_box[10] == 2))
		int_box[2][3] = 2;
	int_box[2][2] = 3;
	int_box[2][1] = 4;
	int_box[2][0] = 1;
}

void	ft_easy_4(int *ext_box, int (*int_box)[4])
{
	if ((ext_box[11] == 4) || (ext_box[4] == 4))
		int_box[3][0] = 1;
	if ((ext_box[8] == 1) || (ext_box[0] == 1))
		int_box[0][0] = 4;
	if ((ext_box[15] == 1) || (ext_box[7] == 1))
		int_box[3][3] = 4;
	if ((ext_box[10] == 3) && (ext_box[14] == 2))
		int_box[2][0] = 2;
	int_box[2][1] = 3;
	int_box[2][2] = 4;
	int_box[2][3] = 1;
	if ((ext_box[5] == 3) && (ext_box[1] == 2))
		int_box[3][1] = 2;
	int_box[2][1] = 3;
	int_box[1][1] = 4;
	int_box[0][1] = 1;
}
