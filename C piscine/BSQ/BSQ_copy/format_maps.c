/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_maps.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 23:16:37 by retcheba          #+#    #+#             */
/*   Updated: 2022/03/09 23:16:38 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ignore_first_line(char *map_raw, int i)
{
	while (map_raw[i] != '\n' && map_raw[i] != '\0')
		i++;
	return (i + 1);
}

void	fill_map(char **map, char *map_raw)
{
	int	i;
	int	j;
	int	line;

	i = 0;
	j = 0;
	line = 0;
	i = ignore_first_line(map_raw, i);
	while (map_raw[i])
	{		
		map[line][j] = map_raw[i];
		if (map_raw[i] == '\n')
		{
			map[line][j + 1] = 0;
			line++;
			i++;
			j = 0;
		}
		else
		{
			i++;
			j++;
		}
	}
}

char	**format_map(char *map_raw, int argc)
{
	char	**map_form;	
	int		nb_lines;
	int		line;
	int		line_len;

	nb_lines = check_map_validity(map_raw, &line_len);
	if (map_raw[0] == '\0')
		ft_putstr("map error\n");
	else
	{
		if (nb_lines > 0)
			map_form = malloc(sizeof(*map_form) * nb_lines);
		line = -1;
		while (++line < nb_lines)
		{
			map_form[line] = malloc(sizeof(char) * (line_len + 32));
		}
		fill_map(map_form, map_raw);
		resolution(map_form, line_len, nb_lines);
	}
	return (map_form);
}
