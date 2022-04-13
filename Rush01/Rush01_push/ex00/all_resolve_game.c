/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_resolve_game.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 22:49:57 by retcheba          #+#    #+#             */
/*   Updated: 2022/02/27 16:50:28 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	resolve(int *ext_box, int (*int_box)[4])
{
	comb_const(ext_box, int_box);
	comb_var(ext_box, int_box);
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
