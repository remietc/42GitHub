/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luserbu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 11:34:19 by luserbu           #+#    #+#             */
/*   Updated: 2022/02/27 16:53:15 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

int		atoi(char c);
void	init_tab(int *ext_box, int (*int_box)[4], char *str);
int		verif_arg_0(char *str);
int		verif_arg_1(char *str);
int		verif_arg_2(char *str);
int		verif_arg_3(char *str);
int		verif_arg_4(char *str);
int		verif_arg_5(char *str);
int		verif_arg_6(char *str);
int		verif_arg_7(char *str);
int		verif_arg_8(char *str);
int		verif_arg_9(char *str);
int		verif_arg_num(int *ext_box);
int		verif_all_arg(char *str, int *ext_box);
void	comb_4_1_part1(int *ext_box, int (*int_box)[4]);
void	comb_4_1_part2(int *ext_box, int (*int_box)[4]);
void	comb_2_3(int *ext_box, int (*int_box)[4]);
void	comb_1_2_part1(int *ext_box, int (*int_box)[4]);
void	comb_1_2_part2(int *ext_box, int (*int_box)[4]);
void	comb_1_3(int *ext_box, int (*int_box)[4]);
void	comb_2_2_part1(int *ext_box, int (*int_box)[4]);
void	comb_2_2_part2(int *ext_box, int (*int_box)[4]);
void	comb_2_2_part3(int *ext_box, int (*int_box)[4]);
void	comb_2_2_part4(int *ext_box, int (*int_box)[4]);
void	comb_int_box_2_4_part1(int *ext_box, int (*int_box)[4]);
void	comb_int_box_2_4_part2(int *ext_box, int (*int_box)[4]);
void	fill_the_hole_row(int (*int_box)[4], int i, int loc_of_0);
void	fill_the_hole_col(int (*int_box)[4], int i, int loc_of_0);
void	fill_holes_row(int (*int_box)[4]);
void	fill_holes_col(int (*int_box)[4]);
void	comb_const(int *ext_box, int (*int_box)[4]);
void	comb_var(int *ext_box, int (*int_box)[4]);
void	resolve(int *ext_box, int (*int_box)[4]);
void	write_top_bottom_lines(int *ext_box, int (*int_box)[4]);
void	write_middle_lines(int *ext_box, int (*int_box)[4]);
void	ft_putchar(int c);

#endif
