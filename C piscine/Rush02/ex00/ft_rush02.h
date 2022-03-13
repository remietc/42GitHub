/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush02.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rledoux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 23:23:32 by rledoux           #+#    #+#             */
/*   Updated: 2022/03/06 18:04:54 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH02_H
# define FT_RUSH02_H

typedef long long unsigned int	t_llui;

void	ft_putstr(char *str);
void	convert(t_llui *tab, int size, t_llui *tab_numb, char (*tab_word)[15]);
t_llui	ft_iterative_power(t_llui nb, t_llui power);
void	zero(t_llui *argv, t_llui *tab, int *cmpt);
void	trois_par_trois(t_llui *numb, t_llui *argv, int *cmpt, t_llui *tab);
void	decorticage(t_llui argv, t_llui *tab_numb, char (*tab_word)[15]);
t_llui	ft_atoi(char *str);
void	read_numb(t_llui *tab_numb, int file, char *path);
void	read_word(char (*tab_word)[15], int file, char *path);
void	read_file(char *argv[]);
int		ft_verif_arg(char *str);

#endif
