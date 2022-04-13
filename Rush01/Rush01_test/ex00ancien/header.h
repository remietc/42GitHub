/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luserbu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 11:34:19 by luserbu           #+#    #+#             */
/*   Updated: 2022/02/27 11:51:17 by hperret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

int		atoi(char c);
int		verif_arg_0(char *str);
int		verif_arg_1(char *str);
int		verif_arg_2(char *str);
int		verif_arg_3(char *str);
int		verif_arg_4(char *str);
int		verif_arg_5(char *str);
int		verif_arg_6(char *str);
int		verif_arg_7(char *str);
int		verif_arg_8(char *str);
int		verif_arg_num(int *ext_box);
int		verif_all_arg(char *str, int *ext_box);
void	ft_easy_1(int *ext_box, int (*int_box)[4]);
void	ft_easy_1_0(int *ext_box, int (*int_box)[4]);
void	ft_easy_2(int *ext_box, int (*int_box)[4]);
void	ft_easy_2_0(int *ext_box, int (*int_box)[4]);
void	ft_easy_3(int *ext_box, int (*int_box)[4]);
void	ft_easy_3_0(int *ext_box, int (*int_box)[4]);
void	ft_easy_4(int *ext_box, int (*int_box)[4]);
void	ft_easy_4_0(int *ext_box, int (*int_box)[4]);
void	resolve_main(int *ext_box, int (*int_box)[4]);
void	write_top_bottom_lines(int *ext_box, int (*int_box)[4]);
void	write_middle_lines(int *ext_box, int (*int_box)[4]);
void	ft_putchar(int c);

#endif
