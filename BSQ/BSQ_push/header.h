/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 23:16:59 by retcheba          #+#    #+#             */
/*   Updated: 2022/03/09 23:17:01 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_strlen(char *str);
void	ft_putstr(char *str);
char	*get_file(char *path_to_file, int *error);
int		check_header_validity(int nb_lines, char *map_raw, char *symbols);
char	**format_map(char *map_raw, int argc);
int		check_map_validity(char *map_raw, int *line_len);
void	resolution(char **tab, int l, int h);
int		ignore_first_line(char *map_raw, int i);

#endif
